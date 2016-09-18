## Chain of Responsibility

Chain of Responsibility pattern avoids coupling the sender of a request to its receiver 
by giving more than one object a chance to handle the request. The pattern chains 
the receiving objects and passes the request along the chain until an object handles it. 
It has a behavioral purpose and deals with relationships between objects. 

### When to use

* more than one object may handle a request, and the handler should be ascertained automatically
* you want to issue a request to one of several objects without specifying the receiver explicitly
* the set of objects that can handle a request should be specified dynamically