## Abstract Factory

Abstract factory pattern has creational purpose and provides an interface for 
creating families of related or dependent objects without specifying their 
concrete classes. Pattern applies to object and deal with object relationships, 
which are more dynamic. In contrast to Factory Method, Abstract Factory pattern
produces family of types that are related, ie. it has more than one method of 
types it produces.

Soyut fabrika deseni oluşturma amaçlıdır ve somut sınıfların özelleştirmesine gerek kalmadan
birbiriyle ilgili veya birbirine bağımlı nesne aileleri için bir arayüz sağlar. Desen, nesneye
uygulanır ve nesnenin ilişkileriyle, daha dinamik biçimde, ilgilenir. Fabrika metodunun(Factory Method)
tersine, Soyut fabrika deseni, ilişkili tür ailesini üretir yani birden fazla metod tür metod üretir.
### Ne zaman kullanılır

* a system should be independent of how its products are created, composed, and represented
* Bir sistem yarattığı, birleştirdiği, temsil ettiği ürünlerden bağımsız olmalı
* a system should be configured with one of multiple families of products
* bir sistem birden fazla ürün ailesi tarafından düzenlenmeli
* a family of related product objects is designed to be used together
* ilişkili bir ürün ailesi nesnesi birlikte kullanılmak üzere tasarlanmıştır
* you want to provide a class library of products, and you want to reveal just their interfaces, not their implementations
* ürün sınıf kütüphanesi sunmak istiyorsunuz ve sadece arayüzlerini değil, uygulamalarını göstermek istiyorsunuz
