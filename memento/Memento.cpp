/*
 * C++ Design Patterns: Memento
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>
#include <vector>

/*
 * Memento
 * stores internal state of the Originator object and protects
 * against access by objects other than the originator
 */
class Memento {
private:
  // accessible only to Originator
  friend class Originator;

  Memento(int s)
    : state(s) {}

  void setState(int s) {
    state = s;
  }

  int getState() {
    return state;
  }
  // ...

private:
  int state;
  // ...
};

/*
 * Originator
 * creates a memento containing a snapshot of its current internal
 * state and uses the memento to restore its internal state
 */
class Originator {
public:
  // implemented only for printing purpose
  void setState(int s) {
    state = s;
  }

  // implemented only for printing purpose
  int getState() {
    return state;
  }

  void setMemento(Memento *m) {
    state = m->getState();
  }

  Memento *createMemento() {
    return new Memento(state);
  }

private:
  int state;
  // ...
};

/*
 * CareTaker
 * is responsible for the memento's safe keeping
 */
class CareTaker {
public:
  CareTaker(Originator *o)
    : originator(o) {}

  ~CareTaker() {
    for (unsigned int i = 0; i < history.size(); i++) {
      delete history.at(i);
    }
    history.clear();
  }

  void save() {
    history.push_back(originator->createMemento());
  }

  void undo() {
    originator->setMemento(history.front());
    history.pop_back();
  }
  // ...

private:
  Originator *originator;
  std::vector<Memento *> history;
  // ...
};


int main()
{
  Originator *originator = new Originator;
  CareTaker *caretaker = new CareTaker(originator);

  originator->setState(1);
  caretaker->save();
  std::cout << "Set state: " << originator->getState() << std::endl;

  originator->setState(2);
  caretaker->save();
  std::cout << "Set state: " << originator->getState() << std::endl;

  caretaker->undo();
  std::cout << "Undo state: " << originator->getState() << std::endl;

  delete originator;
  delete caretaker;

  return 0;
}
