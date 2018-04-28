## Singleton

Ensure a class only has one instance, and provide a global point of access to it.
Pattern has creational purpose and deals with object relationships, which are more 
nynamic. The Singleton is often used as a part another design patterns (see [Façade] and [Flyweight]).  
S¿n¿f¿n yaln¿zve bir örne¿i olduüunden emin ol ve ona eri¿im için global bir nokta sa¿la.
Desen, olu¿turma amaçl¿d¿r ve nesne ili¿kileriyle, daha dinamik biçimde, u¿ra¿¿r. Singleton s¿kça öteki tasar¿m desenlerinin bir parças¿ olarak kullan¿l¿r (bkn:[Façade] ve [Flyweight]).
### Ne zaman kullan¿l¿r?

* there must be exactly one instance of a class, and it must be accessible to clients from a well-known access point
* S¿n¿f¿n yaln¿zca ve yaln¿zca tek bir örne¿i olmas¿ gerekir ve istemciler için iyi bilinen bir eri¿im noktas¿ tan¿ml¿ olmal¿d¿r.
* when the sole instance should be extensible by subclassing, and clients should be able to use an extended instance without modifying their code
* Tek örnek alt s¿n¿flar taraf¿ndan geni¿letilebilir olmal¿ ve istemciler kodlar¿n¿ de¿i¿tirmeden türetilmi¿ örne¿i kullanabilmelidir.

[Façade]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/facade
[Flyweight]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/flyweight
 



