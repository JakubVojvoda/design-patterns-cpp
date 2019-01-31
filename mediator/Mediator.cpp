/*
 * C++ Design Patterns: Mediator
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>
#include <vector>

class Mediator;

/*
 * Colleague classes
 * each colleague communicates with its mediator whenever
 * it would have otherwise communicated with another colleague
 */
class Colleague
{
public:
  Colleague( Mediator* const m, const unsigned int i ) : 
    mediator( m ), id( i ) {}
  
  virtual ~Colleague() {}
  
  unsigned int getID()
  {
    return id;
  }
  
  virtual void send( std::string ) = 0;
  virtual void receive( std::string ) = 0;

protected:
  Mediator *mediator;
  unsigned int id;
};

class ConcreteColleague : public Colleague
{
public:
  ConcreteColleague( Mediator* const m, const unsigned int i ) : 
    Colleague( m, i ) {}
  
  ~ConcreteColleague() {}
  
  void send( std::string msg );
  
  void receive( std::string msg )
  {
    std::cout << "Message '" << msg << "' received by Colleague " << id << std::endl;
  }
};

/*
 * Mediator
 * defines an interface for communicating with Colleague objects
 */
class Mediator
{
public:
  virtual ~Mediator() {}
  
  virtual void add( Colleague* const c ) = 0;
  virtual void distribute( Colleague* const sender, std::string msg ) = 0;

protected:
  Mediator() {}
};

/*
 * Concrete Mediator
 * implements cooperative behavior by coordinating Colleague objects
 * and knows its colleagues
 */
class ConcreteMediator : public Mediator
{
public:
  ~ConcreteMediator()
  {
    for ( unsigned int i = 0; i < colleagues.size(); i++ )
    {
      delete colleagues[ i ];
    }
    colleagues.clear();
  }
  
  void add( Colleague* const c )
  {
    colleagues.push_back( c );
  }
  
  void distribute( Colleague* const sender, std::string msg )
  {
    for ( unsigned int i = 0; i < colleagues.size(); i++ )
    {
      if ( colleagues.at( i )->getID() != sender->getID() )
      {
        colleagues.at( i )->receive( msg );
      }
    }
  }

private:
  std::vector<Colleague*> colleagues;
};

void ConcreteColleague::send( std::string msg )
{
  std::cout << "Message '"<< msg << "' sent by Colleague " << id << std::endl;
  mediator->distribute( this, msg );
}


int main()
{
  Mediator *mediator = new ConcreteMediator();
  
  Colleague *c1 = new ConcreteColleague( mediator, 1 );
  Colleague *c2 = new ConcreteColleague( mediator, 2 );
  Colleague *c3 = new ConcreteColleague( mediator, 3 );
  
  mediator->add( c1 );
  mediator->add( c2 );
  mediator->add( c3 );
  
  c1->send( "Hi!" );
  c3->send( "Hello!" );
  
  delete mediator;
  return 0;
}
