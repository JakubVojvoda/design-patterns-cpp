/*
 * C++ Design Patterns: Abstract Factory
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Product A
 * products implement the same interface so that the classes can refer
 * to the interface not the concrete product
 */
class ProductA {
public:
    virtual ~ProductA() = default;

    virtual const char *getName() = 0;
    // ...
};

/*
 * ConcreteProductAX and ConcreteProductAY
 * define objects to be created by concrete factory
 */
class ConcreteProductAX : public ProductA {
public:
    ~ConcreteProductAX() override = default;

    const char *getName() override {
        return "A-X";
    }
    // ...
};

class ConcreteProductAY : public ProductA {
public:
    ~ConcreteProductAY() override = default;

    const char *getName() override {
        return "A-Y";
    }
    // ...
};

/*
 * Product B
 * same as Product A, Product B declares interface for concrete products
 * where each can produce an entire set of products
 */
class ProductB {
public:
    virtual ~ProductB() = default;

    virtual const char *getName() = 0;
    // ...
};

/*
 * ConcreteProductBX and ConcreteProductBY
 * same as previous concrete product classes
 */
class ConcreteProductBX : public ProductB {
public:
    ~ConcreteProductBX() override = default;

    const char *getName() override {
        return "B-X";
    }
    // ...
};

class ConcreteProductBY : public ProductB {
public:
    ~ConcreteProductBY() override = default;

    const char *getName() override {
        return "B-Y";
    }
    // ...
};

/*
 * Abstract Factory
 * provides an abstract interface for creating a family of products
 */
class AbstractFactory {
public:
    virtual ~AbstractFactory() = default;

    virtual ProductA *createProductA() = 0;

    virtual ProductB *createProductB() = 0;
};

/*
 * Concrete Factory X and Y
 * each concrete factory create a family of products and client uses
 * one of these factories so it never has to instantiate a product object
 */
class ConcreteFactoryX : public AbstractFactory {
public:
    ~ConcreteFactoryX() override = default;

    ProductA *createProductA() override {
        return new ConcreteProductAX();
    }

    ProductB *createProductB() override {
        return new ConcreteProductBX();
    }
    // ...
};

class ConcreteFactoryY : public AbstractFactory {
public:
    ~ConcreteFactoryY() override = default;

    ProductA *createProductA() override {
        return new ConcreteProductAY();
    }

    ProductB *createProductB() override {
        return new ConcreteProductBY();
    }
    // ...
};


int main() {
    auto *factoryX = new ConcreteFactoryX();
    auto *factoryY = new ConcreteFactoryY();

    ProductA *p1 = factoryX->createProductA();
    std::cout << "Product: " << p1->getName() << std::endl;

    ProductA *p2 = factoryY->createProductA();
    std::cout << "Product: " << p2->getName() << std::endl;

    delete p1;
    delete p2;

    delete factoryX;
    delete factoryY;

    return 0;
}
