## Abstract Factory

Abstract factory pattern has creational purpose and provides an interface for 
creating families of related or dependent objects without specifying their 
concrete classes. Pattern applies to object and deal with object relationships, 
which are more dynamic. In contrast to Factory Method, Abstract Factory pattern
produces family of types that are related, ie. it has more than one method of 
types it produces.


### When to use

* a system should be independent of how its products are created, composed, and represented
* a system should be configured with one of multiple families of products
* a family of related product objects is designed to be used together
* you want to provide a class library of products, and you want to reveal just their interfaces, not their implementations