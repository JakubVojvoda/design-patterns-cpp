## C++ Tasarım Desenleri

Software design patterns are general reusable solutions to problems which occur
over and over again in object-oriented design enviroment. It is not a finished 
design that can be transformed into source code directly, but it is template how
to solve the problem. We can classify them by purpose into creational (abstract 
the instantiation process), structure (how classes and objects are composed to form 
larger structures) and behavioral patterns (the assignment of responsibilities between 
objects).  

Yazılım tasarım desenleri, nesneye yönelik tasarım ortamlarında tekrar tekrar oraya
çıkan problemlere genel ve tekrar kullanılabilir çözümler sunar. Bunlar tamamlanmış 
ve doğrudan koda dökülebilecek tasarımlar değil, problemi nasıl çözeceğimizi gösteren
şablonlardır. Amaçlarına göre oluşturucu (örnek oluşturma işlemini soyutlama),
yapısal(sınıfların ve nesnelerin nasıl bir araya gelerek daha büyük yapılar oluşturduğu) 
ve davranışsal(nesneler arasında sorumluluğun atanması) desenler olarak sınıflandırırız.

#### Oluşturucu Desenler 
- [Abstract Factory], families of product objects
- [Soyut Fabrika], Ürün nesnelerinin aileleri

- [Builder], how a composite object gets created
- [Kurucu], bileşke nesnelerin nasıl oluştururduğu
- [Factory Method], subclass of object that is instantiated
- [Fabrika Metodu], oluşturulmuş nesnenin altsınıfı
- [Prototype], class of object that is instantiated
- [Prototip], oluşturulmuş nesnelerin sınıfı
- [Singleton], the sole instance of a class 
- [Singleton], sınıfın tek bir 'yegane' örneği
#### Yapısal Desenler 
- [Adapter], interface to an object
- [Adapter], bir nesneye yapılan arayüz 
- [Bridge], implementation of an object 
- [Bridge], nesnenin gerçeklenmesi, implementasyonu 
- [Composite], structure and composition of an object
- [Composite], nesnenin yapı ve birleşenleri
- [Decorator], responsibilities of an object without subclassing
- [Decorator], altsınıfı olmayan bir nesnenin sorumlulukları 
- [Façade], interface to a subsystem
- [Façade], bir altsisteme oluşturulan arayüz
- [Flyweight], storage costs of objects
- [Flyweight], nesnenin barındırırma maliyeti
- [Proxy], how an object is accessed (its location)
- [Proxy], nesyeye nasıl erişildiği
#### Davranışsal Desenler 
- [Chain of Responsibility], object that can fulfill a request
- [Chain of Responsibility], bir isteği tam olarak karşılayabilen nesne
- [Command], when and how a request is fulfilled
- [Command], bir istek ne zaman ve nasıl karşılandı
- [Interpreter], grammar and interpretation of a language
- [Interpreter], bir dilin grameri ve yorumlanması
- [Iterator], how an aggregate's elements are accessed
- [Iterator], bir sınıfın nesnelerine nasıl erişildiği
- [Mediator], how and which objects interact with each other
- [Mediator], hangi nesneler birbirleriyle ne biçimde etkileşiyor
- [Memento], what private information is stored outside an object, and when 
- [Memento], hangi özel bilgiler nesnenin dışında tutuldu, ve ne zaman
- [Observer], how the dependent objects stay up to date
- [Observer], bağımlı nesneler ne kadar güncel
- [State], states of an object
- [State], bir nesnenin durumu
- [Strategy], an algorithm
- [Strategy], bir algoritma
- [Template Method], steps of an algorithm
- [Template Method], bir algoritmanın adımları
- [Visitor], operations that can be applied to objects without changing their classes
- [Visitor], Sınıfı değiştirmeden, nesnelere uygulanabilen operasyonlar


### Referanslar
Design patterns in this repository are based on

* [Design Patterns by The "Gang of Four"]
* [Head First: Design Patterns]
* [Wikipedia]

[Design Patterns by The "Gang of Four"]: https://en.wikipedia.org/wiki/Design_Patterns
[Head First: Design Patterns]: http://www.headfirstlabs.com/books/hfdp/ 
[Wikipedia]: https://en.wikipedia.org/wiki/Software_design_pattern

[Abstract Factory]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/abstract-factory
[Builder]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/builder
[Factory Method]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/factory-method
[Prototype]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/prototype
[Singleton]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/singleton
[Adapter]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/adapter
[Bridge]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/bridge 
[Composite]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/composite
[Decorator]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/decorator
[Façade]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/facade
[Flyweight]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/flyweight
[Proxy]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/proxy
[Chain of Responsibility]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/chain-of-responsibility
[Command]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/command
[Interpreter]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/interpreter
[Iterator]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/iterator
[Mediator]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/mediator
[Memento]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/memento
[Observer]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/observer
[State]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/state
[Strategy]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/strategy
[Template Method]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/template-method
[Visitor]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/visitor
