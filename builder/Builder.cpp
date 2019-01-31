/*
 * C++ Design Patterns: Builder
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Product
 * the final object that will be created using Builder
 */
class Product
{
public:
  void makeA( const std::string &part )
  {
    partA = part;
  }
  void makeB( const std::string &part )
  {
    partB = part;
  }
  void makeC( const std::string &part )
  {
    partC = part;
  }
  std::string get()
  {
    return (partA + " " + partB + " " + partC);
  }
  // ...
  
private:
  std::string partA;
  std::string partB;
  std::string partC;
  // ...
};

/*
 * Builder
 * abstract interface for creating products
 */
class Builder
{
public:
  virtual ~Builder() {}
  
  Product get()
  {
    return product;
  }
  
  virtual void buildPartA() = 0;
  virtual void buildPartB() = 0;
  virtual void buildPartC() = 0;
  // ...

protected:
  Product product;
};

/*
 * Concrete Builder X and Y
 * create real products and stores them in the composite structure
 */
class ConcreteBuilderX : public Builder
{
public:
  void buildPartA()
  {
    product.makeA( "A-X" );
  }
  void buildPartB()
  {
    product.makeB( "B-X" );
  }
  void buildPartC()
  {
    product.makeC( "C-X" );
  }
  // ...
};

class ConcreteBuilderY : public Builder
{
public:
  void buildPartA()
  {
    product.makeA( "A-Y" );
  }
  void buildPartB()
  {
    product.makeB( "B-Y" );
  }
  void buildPartC()
  {
    product.makeC( "C-Y" );
  }
  // ...
};

/*
 * Director
 * responsible for managing the correct sequence of object creation
 */
class Director {
public:
  Director() : builder() {}
  
  ~Director()
  {
    if ( builder )
    {
      delete builder;
    }
  }
  
  void set( Builder *b )
  {
    if ( builder )
    {
      delete builder;
    }
    builder = b;
  }
  
  Product get()
  {
    return builder->get();
  }
  
  void construct()
  {
    builder->buildPartA();
    builder->buildPartB();
    builder->buildPartC();
    // ...
  }
  // ...

private:
  Builder *builder;
};


int main()
{
  Director director;
  director.set( new ConcreteBuilderX );
  director.construct();
  
  Product product1 = director.get();
  std::cout << "1st product parts: " << product1.get() << std::endl;
  
  director.set( new ConcreteBuilderY );
  director.construct();
  
  Product product2 = director.get();
  std::cout << "2nd product parts: " << product2.get() << std::endl;
  
  return 0;
}
