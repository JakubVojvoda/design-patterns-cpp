/*
 * C++ Design Patterns: Factory Method
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT licence
 * (for more details see LICENCE)
 *
 */

#include <iostream>

/*
 * Product
 * products implement the same interface so that the classes can refer
 * to the interface not the concrete product
 */
class Product {
public:
  virtual std::string getName() = 0;
  // ...
};

/*
 * Concrete Product
 * define product to be created
 */
class ConcreteProductA : public Product {
public:
  std::string getName() {
    return "type A";
  }
  // ...
};

/*
 * Concrete Product
 * define product to be created
 */
class ConcreteProductB : public Product {
public:
  std::string getName() {
    return "type B";
  }
  // ...
};

/*
 * Creator
 * contains the implementation for all of the methods
 * to manipulate products except for the factory method
 */
class Creator {
public:
  virtual Product* createProductA() = 0;
  virtual Product* createProductB() = 0;
  // ...
};

/*
 * Concrete Creator
 * implements factory method that is responsible for creating
 * one or more concrete products ie. it is class that has
 * the knowledge of how to create the products
 */
class ConcreteCreator : public Creator {
public:
  Product* createProductA() {
    return new ConcreteProductA();
  }

  Product* createProductB() {
    return new ConcreteProductB();
  }
  // ...
};


int main()
{
  Creator *creator = new ConcreteCreator();

  Product *p1 = creator->createProductA();
  std::cout << "Product: " << p1->getName() << std::endl;

  Product *p2 = creator->createProductB();
  std::cout << "Product: " << p2->getName() << std::endl;

  return 0;
}
