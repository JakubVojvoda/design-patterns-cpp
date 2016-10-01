## Visitor

Visitor represents an operation to be performed on the elements of an object
structure. It lets you define a new operation without changing the classes of 
the elements on which it operates. The pattern has behavioral purpose and applies 
to the objects.

### When to use

* an object structure contains many classes of objects with differing interfaces, 
and you want to perform operations on these objects that depend on their concrete classes
* many distinct and unrelated operations need to be performed on objects in an object structure, 
and you want to avoid "polluting" their classes with these operations
* the classes defining the object structure rarely change, but you often want
to define new operations over the structure