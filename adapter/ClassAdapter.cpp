/*
 * C++ Design Patterns: Adapter (Class scope)
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
 * all requests get delegated to the Adaptee which defines
 * an existing interface that needs adapting
 */
class Adaptee
{
public:
  ~Adaptee() {}
  
  void specificRequest()
  {
    std::cout << "specific request" << std::endl;
  }
  // ...
};

/*
 * Adapter
 * implements the Target interface and lets the Adaptee respond
 * to request on a Target by extending both classes
 * ie adapts the interface of Adaptee to the Target interface
 */
class Adapter : public Target, private Adaptee
{
public:
  virtual void request()
  {
    specificRequest();
  }
  // ...
};


int main()
{
  Target *t = new Adapter();
  t->request();
  delete t;
  
  return 0;
}
