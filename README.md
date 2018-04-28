## C++ Tasarım Desenleri

Yazılım tasarım desenleri, nesneye yönelik tasarım ortamlarında tekrar tekrar oraya
çıkan problemlere genel ve tekrar kullanılabilir çözümler sunar. Bunlar tamamlanmış 
ve doğrudan koda dökülebilecek tasarımlar değil, problemi nasıl çözeceğimizi gösteren
şablonlardır. Amaçlarına göre oluşturucu (örnek oluşturma işlemini soyutlama),
yapısal(sınıfların ve nesnelerin nasıl bir araya gelerek daha büyük yapılar oluşturduğu) 
ve davranışsal(nesneler arasında sorumluluğun atanması) desenler olarak sınıflandırırız.

#### Oluşturucu Desenler 
- [Abstract Factory], Ürün nesnelerinin aileleri
- [Builder], bileşke nesnelerin nasıl oluştururduğu
- [Factory Method], oluşturulmuş nesnenin altsınıfı
- [Prototype], oluşturulmuş nesnelerin sınıfı
- [Singleton], sınıfın tek bir 'yegane' örneği
#### Yapısal Desenler 
- [Adapter], bir nesneye yapılan arayüz 
- [Bridge], nesnenin gerçeklenmesi, implementasyonu 
- [Composite], nesnenin yapı ve birleşenleri
- [Decorator], altsınıfı olmayan bir nesnenin sorumlulukları 
- [Façade], bir altsisteme oluşturulan arayüz
- [Flyweight], nesnelerin barındırırma maliyeti
- [Proxy], nesyeye bulunduğu yerden nasıl erişildiği
#### Davranışsal Desenler 
- [Chain of Responsibility], bir isteği tam olarak karşılayabilen nesne
- [Command], bir istek ne zaman ve nasıl karşılandı
- [Interpreter], bir dilin grameri ve yorumlanması
- [Iterator], bir sınıfın 'aggregate'e nasıl erişildiği
- [Mediator], hangi nesneler birbirleriyle ne biçimde etkileşiyor
- [Memento], hangi özel bilgiler nesnenin dışında tutuldu, ve ne zaman
- [Observer], bağımlı nesneler ne kadar güncel
- [State], bir nesnenin durumu
- [Strategy], bir algoritma
- [Template Method], bir algoritmanın adımları
- [Visitor], Sınıfı değiştirmeden, nesnelere uygulanabilen operasyonlar


### Referanslar
Tasarım desenleri reposu aşağıdakilerden faydalınalarak oluşturuldu.

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
