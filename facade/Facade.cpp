/*
 * C++ Design Patterns: Facade
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Subsystems
 * implement more complex subsystem functionality
 * and have no knowledge of the facade
 */
class SubsystemA
{
public:
  void suboperation()
  {
    std::cout << "Subsystem A method" << std::endl;
    // ...
  }
  // ...
};

class SubsystemB
{
public:
  void suboperation()
  {
    std::cout << "Subsystem B method" << std::endl;
    // ...
  }
  // ...
};

class SubsystemC
{
public:
  void suboperation()
  {
    std::cout << "Subsystem C method" << std::endl;
    // ...
  }
  // ...
};

/*
 * Facade
 * delegates client requests to appropriate subsystem object
 * and unified interface that is easier to use
 */
class Facade
{
public:
  Facade() : subsystemA(), subsystemB(), subsystemC() {}
  
  void operation1()
  {
    subsystemA->suboperation();
    subsystemB->suboperation();
    // ...
  }
  
  void operation2()
  {
    subsystemC->suboperation();
    // ...
  }
  // ...
  
private:
  SubsystemA *subsystemA;
  SubsystemB *subsystemB;
  SubsystemC *subsystemC;
  // ...
};


int main()
{
  Facade *facade = new Facade();
  
  facade->operation1();
  facade->operation2();
  delete facade;
  
  return 0;
}
