// -*- c++ -*-
// nodes.h

// #include "heading.H"  // for tesing only.  Else comment this out

// Definitions of node classes, i.e., translation records.
// A work in progress
#include <iostream>
#include <string>

// External global variables
extern ostringstream code;                            // Where target code goes
extern ostringstream init;             // Where target initialization code goes
extern ostringstream decs;                      // Where target declarations go
extern int yylineno;                           // defined & maintained in lex.c
extern char* yytext;                           // defined & maintained in lex.c
extern string compilerName;               // initialized from argv[0] in main()
class Var;
extern map<string, Var*> vartab;

// Obsolete stuff:
// extern SemanticType* theIntType;    // global entity for MiniJava's Int type
// extern SemanticType* theIntArrayType;       // ... for MiniJava's Int[] type
// extern SemanticType* theBooleanType;      // ... for MiniJava's Boolean type
// extern SemanticType* theVoidPtrType;
// extern SemanticType* theWordPtrType;
// extern Program* root;                      // pointer to root of syntax tree

static int counter = 0;
static map<string,int> funTable;
static map<string,int> arrTable;
static string lastCall;
static int lastCallFlag=0;
class BoolExpr;

class Function;
typedef list<Function*>     Functions;

class Declaration;
typedef list<Declaration*>  Declarations;

class ParamDeclaration;
typedef list<ParamDeclaration*>  ParamDeclarations;

class Statement;
typedef list<Statement*>    Statements;

class Var;

typedef list<Var*>          Vars;

class Expression;
typedef list<Expression*>   Expressions;
struct Node {
public:
    Node() : lineNo(yylineno), nextTok(yytext) {}
    virtual ~Node() {};
    
    string index, code, place, before, after;  // attributes for node classes here.
    
    int type;
    string pos() {      // for reporting errors, which we do only from nodes
        return "At symbol \"" + nextTok + "\" on line " + itoa(lineNo) +",\n";
    }
    
    // These should create a name and install it into the appropriate table.
    // It's attributes can be filled in later.
    
    static bool newVar( string name ) {
        // install into symbol table and report collisions
        bool success;
        success =vartab.insert(pair<string, Var *>(name,0)).second;
        return success;
    }
    
    bool newArry(string name, int size)  {
        if(size<=0){
            cout<<"error: Array size must be greater than 0"<<endl;
            exit(1);}
        arrTable[name]=size;
        for(int i=0;i<size;i++)
        {
            place=name+ itoa(size);
            newVar(name+ itoa(size));
        }
    }
    
    bool newParam() {
        // install into symbol table and report collisions
    }
    
    bool newFunct() {
        // install into symbol table and report collisions
    }
    
    string newTemp()  {
        static int counter = 0;
        return "Temp" + itoa(counter++);
    }
    
    string newLabel() {
        static int counter = 0;
        return "Label" + itoa(counter++);
    }
    
private:
    int lineNo;             // lineNo at Node's construction is used in pos()
    string nextTok;        // nextTok at Node's construction is used in pos()
};
class Beginloop : public Node {
public:
    string start;
    string exit;
    string repeat;
    Beginloop() {
        
//        start = newLabel();
//        exit = newLabel();
//        repeat = newLabel();
//        Label * temp = new Label();
//        temp->start = start;
//        temp->exit = exit;
//        temp->repeat = repeat;
    }
};
class Var : public Node {
public:
    Var( string* c1 ) {
        // check symbol table for collision
        place = *c1;
        
        
        if(!newVar(place)) {
            cout << "error: " << place <<" has already been defined" << endl;
            exit(1);
        }
        
        
        type = 1;
        //place = newTemp();
        //code += (". " + place + "/n");
    }
    Var( string* c1, int c2, Node* c3, int c4 )
    {
        place=*c1;
        if (vartab.count(place) == 0) {
            cout << "var: " << place << " is not defined" << endl;
            exit(1);
        }
        if(arrTable.count(place)==0){
            cout<<"var: "<<place<< " is not an array"<<endl;
            exit(1);
        }
        index = c3->place;
        code += c3->code;
    }
};

class Expression  : public Node {
public:
    string findSym( int n) {
        static map<int,string> decode;
        decode[43] = "+ ";
        decode[45] = "- ";
        decode[42] = "* ";
        decode[47] = "/ ";
        decode[37] = "% ";
        return decode[n];
    }
    Expression( Var* c1 ) {
        // check to see that it has been declared
        place = c1->place;    // Var
        if (vartab.count(place) == 0) {
            cout << "var: " << place << " is not defined" << endl;
            exit(1);
        }
        string temp = newTemp();
        code += c1->code;
        code += (". " + temp + "\n");
        if(c1->type == 1) {
            code += ("= " + temp + ", " + place + "\n");
        }
        else {
            code += ("=[] " + temp + ", " + c1->place + ", " + c1->index + "\n");
        }
        place = temp;
    }
    Expression( int c1 ) {
        place = itoa(c1);
        string temp = newTemp();
        code += (". " + temp + "\n");
        code += ("= " + temp + ", " + place + "\n");
        place = temp;
        
    }   // NUMBER
    Expression( int c1, Expression* c2, int c3 ) {
        place = c2->place;
        code += c2->code;
    } // '(" Expression ')'
    Expression( string* c1, int c2, Expressions* c3, int c4 ) {
        string name;
        for ( auto it : *c3 ) {
            code  += it->code;
            name = it-> place;
        }
        place = newTemp();
        lastCall=*c1;
        lastCallFlag=1;
        code += ("param " + name + "\n");
        code += (". " + place + "\n");
        code += ("call " + *c1 + ", " + place +"\n");
    }
    Expression( Expression* c1, int c2, Expression* c3 ) {
        place = newTemp();
        code += (c1->code);
        code += (c3->code);
        code += (". " + place + "\n");
        code += (findSym(c2) + place + ", " + c1->place + ", " + c3->place +"\n");
    }
    Expression( int c2, Expression* c3 ) {
        place = newTemp();
        code += c3->code;
        code += (". " + place + "\n");
        code += (findSym(c2) + c3->place +"\n");
    }
};

class BoolExpr    : public Node {
public:
    string findS(int i) {
        static map<int, string> decode;
        decode[288] = "== ";
        decode[287] = "!= ";
        decode[292] = "< ";
        decode[290] = "> ";
        decode[291] = "<= ";
        decode[289] = ">= ";
        decode[285] = "&& ";
        decode[284] = "|| ";
        decode[286] = "!";
        return decode[i];
    }
    
    BoolExpr( Expression* c1, int c2, Expression* c3 ) {
        place = newTemp();
        code += c1->code;
        code += c3->code;
        code += (". " + place +"\n");
        code += (findS(c2) + place + ", " + c1->place + ", " + c3->place + "\n");
    }
    BoolExpr( BoolExpr* c1,   int c2, BoolExpr* c3 ) {
        place = newTemp();
        code += c1->code;
        code += c3->code;
        code += (". " + place +"\n");
        code += (findS(c2) + place + ", " + c1->place + ", " + c3->place + "\n");
        
    }
    BoolExpr( int c1, BoolExpr* c2 ) {
        place = newTemp();
        code += c2->code;
        code += (". " + place +"\n");
        code += (findS(c1) + place + ", " + c2->place + "\n");
        
    }
    BoolExpr( int c1 ) {}
    BoolExpr( int c1, BoolExpr* c2, int c3 ) {
        code = c2->code;
        place = c2->place;
    }
    BoolExpr( int c1, int c2, int c3 ) {
        place = newTemp();
        code += (". " + place + "\n");
        code += ("= " + place + ", " +itoa(c1) + "\n");
        
    }
};

class Declaration : public Node {
public:
    int size;  // size of array; size == 0 for scalars.
    Declaration( list<string*>* c1, int c2, int c3 )
    { for( auto it : *c1 ) {
        // install *it into var table unless it causes a collision
        // var table contains both scalars and arrays.
        // should construct a Var and add it to the symbol table.
        vartab[*it] = new Var( it );
        vartab[*it]->type = 1;
        code += ( ". " + *it + "\n" );
    }
    }
    
    Declaration( list<string*>* c1, int c2, int c3, int c4, int c5, int c6,
                int c7, int c8 )
    {
        for( auto it : *c1 )
        {
            // install *it into var table unless it causes a collision
            // var table contains both scalars and arrays.
            // should construct a Var and add it to the symbol table.
            newArry(*it,c5);
            vartab[*it] = new Var( it );
            vartab[*it]->type = 2;
            code += ( ".[] " + *it + ", " + std::to_string(c5) + "\n" );
        }
    }
    
};

class ParamDeclaration : public Node {
public:
    int size;  // size of array; size == 0 for scalars.
    ParamDeclaration( list<string*>* c1, int c2, int c3 ) {
        
        for( auto it : *c1 ) {
            // install *it into var table unless it causes a collision
            // var table contains both scalars and arrays.
            // should construct a Var and add it to the symbol table.
            vartab[*it] = new Var( it );
            code += ( ". " + *it + "\n" );
            code += ("= " + *it + ", $" + itoa(counter++) + "\n");
        }
    }
    
    ParamDeclaration( list<string*>* c1, int c2, int c3, int c4, int c5, int c6,
                     int c7, int c8 )
    {
        
        for( auto it : *c1 )
        {
            // install *it into var table unless it causes a collision
            // var table contains both scalars and arrays.
            // should construct a Var and add it to the symbol table.
            newArry(*it,c5);
            vartab[*it] = new Var( it );
            code += ( ".[] " + *it + ", " + std::to_string(c5) + "\n" );
            code += ("= " + *it + ", $" + itoa(counter++) + "\n");
        }
    }
    
};

class Statement : public Node {
public:
    stack<Label*> loop_stack;
    virtual ~Statement(){};
};

class AssignmentStmt : public Statement {
public:
    AssignmentStmt( Var* c1, int c2, Expression* c3 ) {
        if(c1->type == 1) {
            (code += c3->code) += ( "= " + c1->place + "," + c3->place + "\n" );
        }
        else {
            code += c1->code;
            (code += c3->code) += ("[]= " + c1->place + ", " + c1->index +", "+ c3->place +"\n");
        }
    }
};

class IfThenStmt : public Statement {
public:
public:
    IfThenStmt( int c1, BoolExpr* c2, int c3, Statements* c4, int c5 ) {
        (code += c2->code);
        string start = newLabel();
        string exit = newLabel();
        //place = newTemp();
        code += ("?:= " + start + ", " + c2->place +"\n");
        code += (":= " + exit + "\n");
        code += (": " + start + "\n");
        for( auto it : *c4  ) {code += it->code;};
        code += (": " + exit + "\n");
    }
};

class IfThenElseStmt : public Statement {
public:
    IfThenElseStmt( int c1, BoolExpr* c2, int c3, Statements* c4, int c5,
                   Statements* c6, int c7 ) {
        (code += c2->code);
        string start = newLabel();
        string exit = newLabel();
        //place = newTemp();
        code += ("?:= " + start + ", " + c2->place +"\n");
        for (auto it : *c6 ) {code += it->code;};
        code += (":= " + exit + "\n");
        code += (": " + start + "\n");
        for( auto it : *c4  ) {code += it->code;};
        code += (": " + exit + "\n");
        
    }
};

class WhileStmt : public Statement {
public:
    WhileStmt( int c1, BoolExpr* c2, Beginloop* c3, Statements* c4, int c5) {
        Label*  temp = new Label();
        temp->start = newLabel();
        temp->exit = newLabel();
        temp->repeat = newLabel();
        loop_stack.push(temp);
        code += (": " + loop_stack.top()->repeat + "\n");
        code += c2->code;
        code += ("?:= " + loop_stack.top()->start + ", " + c2->place + "\n");
        code += (":= " + loop_stack.top()->exit + "\n");
        code += (": " + loop_stack.top()->start + "\n");
        for (auto it : *c4) {code += it->code;};
        code += (":= " + loop_stack.top()->repeat + "\n");
        code += (": " + loop_stack.top()->exit + "\n");
        loop_stack.pop();
    }
};
class DoWhileStmt : public Statement {
public:
    DoWhileStmt( int c1, Beginloop* c2, Statements* c3, int c4, int c5,
                BoolExpr* c6 ){
        code += (":= " + c2->start + "\n");
        code += (": " + c2->repeat + "\n");
        code += c6->code;
        code += ("?:= " + c2->start + "\n");
        code += (":= " + c2->exit + "\n");
        code += (": " + c2->start + "\n");
        for (auto it : *c3) {code += it->code;};
        code += (":= " + c2->start + "\n");
        code += c6->code;
        code += (": " + c2->exit + "\n");
        loop_stack.pop();
    }
};

class ReadStmt : public Statement {
public:
    ReadStmt( int c1, Vars* c2 ) {
        for ( auto it : *c2 ) {
            if(it->type == 1) {
                code  += ( ".< " + it->place + "\n" );
            }
            else {
                code += it->code;
                code += (".[] < " + it->place + ", " + it->index +"\n");
            }
            
        }
    }
    
};

class WriteStmt : public Statement {
public:
    WriteStmt( int c1, Vars* c2 ) {
        for ( auto it : *c2 ) {
            if (it->type == 1) {
                code  += ( ".> " + it->place + "\n" );
            }
            else {
                code += ( ".[]> " + it->place + ", " + it->index + "\n");
            }
        }
    }
};

class ContinueStmt : public Statement {
public:
    ContinueStmt( int c1 ) {
        //code += (":= " + loop_stack.top()->start + "\n");
        
    }
};

class ReturnStmt : public Statement {
public:
    ReturnStmt( int c1, Expression* c2 ) {
        code += c2->code;
        code += ("ret " + c2->place + "\n");
    }
};

class Function    : public Node {
public:
    Function(int c1, string* c2, int c3, int c4, ParamDeclarations* c5, int c6,
             int c7, Declarations* c8, int c9, int c10, Statements* c11, int c12)
    {
        
        // add *c2 to function symbol table
        funTable[*c2]=1;
        
        ( code += "func ") += *c2 += "\n";
        for( auto it : *c5  ) {
            // add each param to symbol table
            code += it->code;
        };
        for( auto it : *c8  ) {
            // add each local to symbol table
            code += it->code;
        };
        for( auto it : *c11 ) {
            // add each statement's code to this function's code
            code += it->code;
        };
        code += "endfunc\n";
    }
};


class Program     : public Node {
public:
    Program(Functions *c1)
    { for( Function* it : *c1 ) {
        code += it->code;  // May need to insert a newline here.
    }
        if((funTable.count(lastCall)==0)&&(lastCallFlag==1))
        {
            cout<<"Error undefined function call"<<endl;
            exit(1);
        }
        if(funTable.count("main")==0)
        {
            cout<<"Error no main function"<<endl;
            exit(1);
        }
        // May need to do an analysis here.
        cout << code;
    }
};





