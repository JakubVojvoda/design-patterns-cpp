## Factory Method

Define an interface for creating an object, but let subclasses decide which class to instantiate. 
Factory Method lets a class defer instantiation to subclasses. The pattern has creational purpose
and applies to classes where deals with relationships through inheritence ie. they are static-fixed 
at compile time. In contrast to Abstract Factory, Factory Method contain method to produce only one
type of product.  

### When to use

* a class cant anticipate the class of objects it must create
* a class wants its subclasses to specify the objects it creates
* classes delegate responsibility to one of several helper subclasses, and you want to localize the knowledge of which helper subclass is the delegate 