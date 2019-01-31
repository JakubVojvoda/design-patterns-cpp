/*
 * C++ Design Patterns: Strategy
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Strategy
 * declares an interface common to all supported algorithms
 */
class Strategy
{
public:
  virtual ~Strategy() { /* ... */ }
  virtual void algorithmInterface() = 0;
  // ...
};

/*
 * Concrete Strategies
 * implement the algorithm using the Strategy interface
 */
class ConcreteStrategyA : public Strategy
{
public:
  ~ConcreteStrategyA() { /* ... */ }
  
  void algorithmInterface()
  {
    std::cout << "Concrete Strategy A" << std::endl;
  }
  // ...
};

class ConcreteStrategyB : public Strategy
{
public:
  ~ConcreteStrategyB() { /* ... */ }
  
  void algorithmInterface()
  {
    std::cout << "Concrete Strategy B" << std::endl;
  }
  // ...
};

class ConcreteStrategyC : public Strategy
{
public:
  ~ConcreteStrategyC() { /* ... */ }
  
  void algorithmInterface()
  {
    std::cout << "Concrete Strategy C" << std::endl;
  }
  // ...
};

/*
 * Context
 * maintains a reference to a Strategy object
 */
class Context
{
public:
  Context( Strategy* const s ) : strategy( s ) {}
  
  ~Context()
  {
    delete strategy;
  }
  
  void contextInterface()
  {
    strategy->algorithmInterface();
  }
  // ...

private:
  Strategy *strategy;
  // ...
};


int main()
{
  Context context( new ConcreteStrategyA() );
  context.contextInterface();
  
  return 0;
}
