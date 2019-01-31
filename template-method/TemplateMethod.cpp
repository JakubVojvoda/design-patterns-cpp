/*
 * C++ Design Patterns: Template Method
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * AbstractClass
 * implements a template method defining the skeleton of an algorithm
 */
class AbstractClass
{
public:
  virtual ~AbstractClass() {}
  
  void templateMethod()
  {
    // ...
    primitiveOperation1();
    // ...
    primitiveOperation2();
    // ...
  }
  
  virtual void primitiveOperation1() = 0;
  virtual void primitiveOperation2() = 0;
  // ...
};

/*
 * Concrete Class
 * implements the primitive operations to carry out specific steps
 * of the algorithm, there may be many Concrete classes, each implementing
 * the full set of the required operation
 */
class ConcreteClass : public AbstractClass
{
public:
  ~ConcreteClass() {}
  
  void primitiveOperation1()
  {
    std::cout << "Primitive operation 1" << std::endl;
    // ...
  }
  
  void primitiveOperation2()
  {
    std::cout << "Primitive operation 2" << std::endl;
    // ...
  }
  // ...
};


int main()
{
  AbstractClass *tm = new ConcreteClass;
  tm->templateMethod();
  
  delete tm;
  return 0;
}
