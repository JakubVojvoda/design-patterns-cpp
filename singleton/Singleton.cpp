/*
 * C++ Design Patterns: Singleton
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT licence
 * (for more details see LICENCE)
 *
 */

#include <iostream>

/*
 * Singleton
 * has private static variable to hold one instance of the class
 * and method which gives us a way to instantiate the class
 */
class Singleton {
public:
  static Singleton *get() {
    if (instance == NULL) {
      instance = new Singleton();
    }
    return instance;
  }

  void tell() {
    std::cout << "This is Singleton." << std::endl;
    // ...
  }

  // ...

private:
  static Singleton *instance;
  // ...
};


int main()
{
  Singleton singleton;
  singleton.tell();

  return 0;
}
