## Command

Command pattern encapsulates a request as an object, thereby letting you parameterize
clients with different requests, queue or log requests, and supports undoable
operations. The pattern has a behavioral purpose and deals with relationships between objects. 

### When to use

* want to parameterize objects by an action to perform
* want to specify, queue, and execute requests at different times
* support undo
* support logging changes so that they can be reapplied in case of a system crash
* structure a system around high-level operations built on primitives operations
