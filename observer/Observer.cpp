/*
 * C++ Design Patterns: Observer
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>
#include <vector>

class Subject;

/*
 * Observer
 * defines an updating interface for objects that should be notified
 * of changes in a subject
 */
class Observer
{
public:
  virtual ~Observer() {}
  
  virtual int getState() = 0;
  virtual void update( Subject *subject ) = 0;
  // ...
};

/*
 * Concrete Observer
 * stores state of interest to ConcreteObserver objects and
 * sends a notification to its observers when its state changes
 */
class ConcreteObserver : public Observer
{
public:
  ConcreteObserver( const int state ) :
    observer_state( state ) {}
  
  ~ConcreteObserver() {}
  
  int getState()
  {
    return observer_state;
  }
  
  void update( Subject *subject );
  // ...

private:
  int observer_state;
  // ...
};

/*
 * Subject
 * knows its observers and provides an interface for attaching
 * and detaching observers
 */
class Subject
{
public:
  virtual ~Subject() {}
  
  void attach( Observer *observer )
  {
    observers.push_back(observer);
  }
  
  void detach( const int index )
  {
    observers.erase( observers.begin() + index );
  }
  
  void notify()
  {
    for ( unsigned int i = 0; i < observers.size(); i++ )
    {
      observers.at( i )->update( this );
    }
  }
  
  virtual int getState() = 0;
  virtual void setState( const int s ) = 0;
  // ...

private:
  std::vector<Observer*> observers;
  // ...
};

/*
 * Concrete Subject
 * stores state that should stay consistent with the subject's
 */
class ConcreteSubject : public Subject
{
public:
  ~ConcreteSubject() {}
  
  int getState()
  {
    return subject_state;
  }
  
  void setState( const int s )
  {
    subject_state = s;
  }
  // ...
  
private:
  int subject_state;
  // ...
};

void ConcreteObserver::update( Subject *subject )
{
  observer_state = subject->getState();
  std::cout << "Observer state updated." << std::endl;
}


int main()
{
  ConcreteObserver observer1( 1 );
  ConcreteObserver observer2( 2 );
  
  std::cout << "Observer 1 state: " << observer1.getState() << std::endl;
  std::cout << "Observer 2 state: " << observer2.getState() << std::endl;
  
  Subject *subject = new ConcreteSubject();
  subject->attach( &observer1 );
  subject->attach( &observer2 );
  
  subject->setState( 10 );
  subject->notify();
  
  std::cout << "Observer 1 state: " << observer1.getState() << std::endl;
  std::cout << "Observer 2 state: " << observer2.getState() << std::endl;
  
  delete subject;
  return 0;
}