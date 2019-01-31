## Template Method

Template method defines the skeleton of an algorithm in an operation, deferring some
steps to subclasses. It lets subclasses redefine certain steps of an algorithm 
without changing the algorithm's structure. The pattern has behavioral purpose and
applies to the classes.

### When to use

* to implement the invariant parts of an algorithm once and leave it up to subclasses to implement the behavior that can vary
* when common behavior among subclasses should be factored and localizedin a common class to avoid code duplication
* to control subclasses extensions