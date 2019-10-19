/*
 * C++ Design Patterns: Command
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Receiver
 * knows how to perform the operations associated
 * with carrying out a request
 */
class Receiver
{
public:
  static void action()
  {
    std::cout << "Receiver: execute action" << std::endl;
  }
  // ...
};

/*
 * Command
 * declares an interface for all commands
 */
class Command
{
public:
  virtual ~Command() = default;
  virtual void execute() = 0;
  // ...

protected:
  Command() = default;
};

/*
 * Concrete Command
 * implements execute by invoking the corresponding
 * operation(s) on Receiver
 */
class ConcreteCommand : public Command
{
public:
  explicit ConcreteCommand( Receiver *r ) : receiver( r ) {}
  
  ~ConcreteCommand() override
  {
    if ( receiver )
    {
      delete receiver;
    }
  }
  
  void execute() override
  {
    receiver->action();
  }
  // ...
  
private:
  Receiver *receiver;
  // ...
};

/*
 * Invoker
 * asks the command to carry out the request
 */
class Invoker
{
public:
  void set( Command *c )
  {
    command = c;
  }
  
  void confirm()
  {
    if ( command )
    {
      command->execute();  
    }
  }
  // ...

private:
  Command *command;
  // ...
};


int main()
{
  ConcreteCommand command( new Receiver() );
  
  Invoker invoker{};
  invoker.set( &command );
  invoker.confirm();
  
  return 0;
}
