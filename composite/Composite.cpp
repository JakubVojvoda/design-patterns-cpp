/*
 * C++ Design Patterns: Composite
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT licence
 * (for more details see LICENCE)
 *
 */

#include <iostream>
#include <vector>

/*
 * Component
 * defines an interface for all objects in the composition
 * both the composite and the leaf nodes
 */
class Component {
public:
  virtual Component *getChild(int) { return 0; }

  virtual void add(Component *) { /* ... */ }
  virtual void remove(int) { /* ... */ }

  virtual void operation() = 0;
};

/*
 * Composite
 * defines behavior of the components having children
 * and store child components
 */
class Composite : public Component {
public:
  Component *getChild(int index) {
    return children.at(index);
  }

  void add(Component *component) {
    children.push_back(component);
  }

  void remove(int index) {
    children.erase(children.begin() + index);
  }

  void operation() {
    for (unsigned int i = 0; i < children.size(); i++) {
      children.at(i)->operation();
    }
  }

private:
  std::vector<Component *> children;
};

/*
 * Leaf
 * defines the behavior for the elements in the composition,
 * it has no children
 */
class Leaf : public Component {
public:
  Leaf(int i) : id(i) {}

  void operation() {
    std::cout << "Leaf "<< id <<" operation" << std::endl;
  }

private:
  int id;
};


int main()
{
  Composite composite;

  for (unsigned int i = 0; i < 10; i++) {
    composite.add(new Leaf(i));
  }

  composite.operation();

  return 0;
}
