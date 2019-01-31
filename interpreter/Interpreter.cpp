/*
 * C++ Design Patterns: Interpreter
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>
#include <map>

/*
 * Context
 * contains information that's global to the interpreter
 */
class Context
{
public:
  void set( const std::string& var, const bool value)
  {
    vars.insert( std::pair<std::string, bool>( var, value ) );
  }
  
  bool get( const std::string& exp )
  {
    return vars[ exp ];
  }
  // ...

private:
  std::map<std::string, bool> vars;
  // ...
};

/*
 * Abstract Expression
 * declares an abstract Interpret operation that is common to all nodes
 * in the abstract syntax tree
 */
class AbstractExpression
{
public:
  virtual ~AbstractExpression() {}
  
  virtual bool interpret( Context* const )
  {
    return false;
  }
  // ...
};

/*
 * Terminal Expression
 * implements an Interpret operation associated with terminal symbols
 * in the grammar (an instance is required for every terminal symbol
 * in a sentence)
 */
class TerminalExpression : public AbstractExpression
{
public:
  TerminalExpression( const std::string& val ) : value( val ) {}
  
  ~TerminalExpression() {}
  
  bool interpret( Context* const context )
  {
    return context->get( value );
  }
  // ...
  
private:
  std::string value;
  // ...
};

/*
 * Nonterminal Expression
 * implements an Interpret operation for nonterminal symbols
 * in the grammar (one such class is required for every rule in the grammar)
 */
class NonterminalExpression : public AbstractExpression
{
public:
  NonterminalExpression( AbstractExpression *left, AbstractExpression *right ) : 
    lop( left ), rop( right ) {}
  
  ~NonterminalExpression()
  {
    delete lop;
    delete rop;
  }
  
  bool interpret( Context *const context )
  {
    return lop->interpret( context ) && rop->interpret( context );
  }
  // ...
  
private:
  AbstractExpression *lop;
  AbstractExpression *rop;
  // ...
};


int main()
{
  // An example of very simple expression tree
  // that corresponds to expression (A AND B)
  AbstractExpression *A = new TerminalExpression("A");
  AbstractExpression *B = new TerminalExpression("B");
  AbstractExpression *exp = new NonterminalExpression( A, B );
  
  Context context;
  context.set( "A", true );
  context.set( "B", false );
  
  std::cout << context.get( "A" ) << " AND " << context.get( "B" );
  std::cout << " = " << exp->interpret( &context ) << std::endl;
  
  delete exp;
  return 0;
}
