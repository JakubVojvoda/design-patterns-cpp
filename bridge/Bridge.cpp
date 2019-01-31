/*
 * C++ Design Patterns: Bridge
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Implementor
 * defines the interface for implementation classes
 */
class Implementor
{
public:
  virtual ~Implementor() {}
  
  virtual void action() = 0;
  // ...
};

/*
 * Concrete Implementors
 * implement the Implementor interface and define concrete implementations
 */
class ConcreteImplementorA : public Implementor
{
public:
  ~ConcreteImplementorA() {}
  
  void action()
  {
    std::cout << "Concrete Implementor A" << std::endl;
  }
  // ...
};

class ConcreteImplementorB : public Implementor
{
public:
  ~ConcreteImplementorB() {}
  
  void action()
  {
    std::cout << "Concrete Implementor B" << std::endl;
  }
  // ...
};

/*
 * Abstraction
 * defines the abstraction's interface
 */
class Abstraction
{
public:
  virtual ~Abstraction() {}
  
  virtual void operation() = 0;
  // ...
};

/*
 * RefinedAbstraction
 * extends the interface defined by Abstraction
 */
class RefinedAbstraction : public Abstraction
{
public:
  ~RefinedAbstraction() {}
  
  RefinedAbstraction(Implementor *impl) : implementor(impl) {}
  
  void operation()
  {
    implementor->action();
  }
  // ...

private:
  Implementor *implementor;
};


int main()
{
  Implementor *ia = new ConcreteImplementorA;
  Implementor *ib = new ConcreteImplementorB;
  
  Abstraction *abstract1 = new RefinedAbstraction(ia);
  abstract1->operation();
  
  Abstraction *abstract2 = new RefinedAbstraction(ib);
  abstract2->operation();
  
  delete abstract1;
  delete abstract2;
  
  delete ia;
  delete ib;
  
  return 0;
}
