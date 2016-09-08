/*
 * C++ Design Patterns: Prototype
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT licence
 * (for more details see LICENCE)
 *
 */

#include <iostream>

/*
 * Prototype
 * declares an interface for cloning itself
 */
class Prototype {
public:
  virtual Prototype *clone() = 0;
  virtual std::string type() = 0;
  // ...
};

/*
 * Concrete Prototype A and B
 * implement an operation for cloning itself
 */
class ConcretePrototypeA : public Prototype {
public:
  Prototype *clone() {
    return new ConcretePrototypeA;
  }
  std::string type() {
    return "type A";
  }
  // ...
};

class ConcretePrototypeB : public Prototype {
public:
  Prototype *clone() {
    return new ConcretePrototypeB;
  }
  std::string type() {
    return "type B";
  }
  // ...
};

/*
 * Client
 * creates a new object by asking a prototype to clone itself
 */
class Client {
public:
  static Prototype* make(int index) {
    return types[index]->clone();
  }
  // ...

private:
  static Prototype* types[2];
};

Prototype* Client::types[] =
{
  new ConcretePrototypeA,
  new ConcretePrototypeB
  // ...
};


int main()
{
  Prototype* prototype;

  prototype = Client::make(0);
  std::cout << "Prototype: " << prototype->type() << std::endl;

  prototype = Client::make(1);
  std::cout << "Prototype: " << prototype->type() << std::endl;

  return 0;
}
