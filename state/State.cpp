/*
 * C++ Design Patterns: State
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * State
 * defines an interface for encapsulating the behavior associated
 * with a particular state of the Context
 */
class State
{
public:
  virtual ~State() { /* ... */ }
  virtual void handle() = 0;
  // ...
};

/*
 * Concrete States
 * each subclass implements a behavior associated with a state
 * of the Context
 */
class ConcreteStateA : public State
{
public:
  ~ConcreteStateA() { /* ... */ }
  
  void handle()
  {
    std::cout << "State A handled." << std::endl;
  }
  // ...
};

class ConcreteStateB : public State
{
public:
  ~ConcreteStateB() { /* ... */ }
  
  void handle()
  {
    std::cout << "State B handled." << std::endl;
  }
  // ...
};

/*
 * Context
 * defines the interface of interest to clients
 */
class Context
{
public:
  Context() : state() { /* ... */ }
  
  ~Context()
  {
    delete state;
  }
  
  void setState( State* const s )
  {
    if ( state )
    {
      delete state;
    }
    state = s;
  }
  
  void request()
  {
    state->handle();
  }
  // ...

private:
  State *state;
  // ...
};


int main()
{
  Context *context = new Context();
  
  context->setState( new ConcreteStateA() );
  context->request();
  
  context->setState( new ConcreteStateB() );
  context->request();
  
  delete context;
  return 0;
}
