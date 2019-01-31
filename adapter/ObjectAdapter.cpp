/*
 * C++ Design Patterns: Adapter (Object scope)
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Target
 * defines specific interface that Client uses
 */
class Target
{
public:
  virtual ~Target() {}
  
  virtual void request() = 0;
  // ...
};

/*
 * Adaptee
 * defines an existing interface that needs adapting and thanks
 * to Adapter it will get calls that client makes on the Target
 *
 */
class Adaptee
{
public:
  void specificRequest()
  {
    std::cout << "specific request" << std::endl;
  }
  // ...
};

/*
 * Adapter
 * implements the Target interface and when it gets a method call it
 * delegates the call to a Adaptee
 */
class Adapter : public Target
{
public:
  Adapter() : adaptee() {}
  
  ~Adapter()
  {
    delete adaptee;
  }
  
  void request()
  {
    adaptee->specificRequest();
  // ...
  }
  // ...

private:
  Adaptee *adaptee;
  // ...
};


int main()
{
  Target *t = new Adapter();
  t->request();
  delete t;
  
  return 0;
}
