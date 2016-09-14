## Adapter

Convert the interface of a class into another interface the clients expect.
Adapter lets classes work together that couldn't otherwise because of
incompatible interfaces, ie. allows to use a client with an incompatible 
interface by an Adapter that does the conversion. Adapter has structural purpose
and can be applied on classes and also on object. A class adapter uses multiple 
inheritance to adapt one interface to another and the object adapter uses object 
composition to combine classes with different interfaces.

### When to use

* you want to use an existing class, and its interface does not match the one you need
* you want to create a reusable class that cooperates with classes that don't necessarily have compatible interfaces

