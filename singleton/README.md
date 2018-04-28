## Singleton

Ensure a class only has one instance, and provide a global point of access to it.
Pattern has creational purpose and deals with object relationships, which are more 
nynamic. The Singleton is often used as a part another design patterns (see [Fa�ade] and [Flyweight]).  
S�n�f�n yaln�zve bir �rne�i oldu�unden emin ol ve ona eri�im i�in global bir nokta sa�la.
Desen, olu�turma ama�l�d�r ve nesne ili�kileriyle, daha dinamik bi�imde, u�ra��r. Singleton s�k�a �teki tasar�m desenlerinin bir par�as� olarak kullan�l�r (bkn:[Fa�ade] ve [Flyweight]).
### Ne zaman kullan�l�r?

* there must be exactly one instance of a class, and it must be accessible to clients from a well-known access point
* S�n�f�n yaln�zca ve yaln�zca tek bir �rne�i olmas� gerekir ve istemciler i�in iyi bilinen bir eri�im noktas� tan�ml� olmal�d�r.
* when the sole instance should be extensible by subclassing, and clients should be able to use an extended instance without modifying their code
* Tek �rnek alt s�n�flar taraf�ndan geni�letilebilir olmal� ve istemciler kodlar�n� de�i�tirmeden t�retilmi� �rne�i kullanabilmelidir.

[Fa�ade]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/facade
[Flyweight]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/flyweight
 



