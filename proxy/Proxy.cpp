/*
 * C++ Design Patterns: Proxy
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Subject
 * defines the common interface for RealSubject and Proxy
 * so that a Proxy can be used anywhere a RealSubject is expected
 */
class Subject
{
public:
  virtual ~Subject() { /* ... */ }

  virtual void request() = 0;
  // ...
};

/*
 * Real Subject
 * defines the real object that the proxy represents
 */
class RealSubject : public Subject
{
public:
  void request()
  {
    std::cout << "Real Subject request" << std::endl;
  }
  // ...
};

/*
 * Proxy
 * maintains a reference that lets the proxy access the real subject
 */
class Proxy : public Subject
{
public:
  Proxy()
  {
    subject = new RealSubject();
  }
  
  ~Proxy()
  {
    delete subject;
  }
  
  void request()
  {
    subject->request();
  }
  // ...

private:
  RealSubject *subject;
};


int main()
{
  Proxy *proxy = new Proxy();
  proxy->request();
  
  delete proxy;
  return 0;
}
