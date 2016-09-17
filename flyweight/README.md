## Flyweight

Flyweight pattern has has structural purpose, applies to objects and uses sharing to support 
large numbers of fine-grained objects efficiently. The pattern can be used to reduce 
memory usage when you need to create a large number of similar objects.

### When to use

* when one instance of a class can be used to provide many "virtual instances"
* when all of the following are true
 * an application uses a large number of objects
 * storage costs are high because of the sheer quantity of objects
 * most object state can be made extrinsic
 * many groups of objects may be replaced by relatively few shared objects once extrinsic state is removed
 * the application doesn't depend on object identity 