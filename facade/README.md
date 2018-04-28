## Façade

Provide a unified interface to a set of interfaces in a subsystem. Facade
defines a higher-level interface that makes the subsystem easier to use. 
The pattern has structural purpose and applies to objects.

Bir altsistemdeki arayüz kümesine birle¿tirilmi¿ bir arayüz sa¿la. Facade 
yüksek seviyeli bir arayüz sa¿lar ve altsistemin kullan¿m¿n¿ kolayla¿t¿r¿r.
Desen yap¿sal amaçl¿d¿r ve nesnelere uygulan¿r.

### Ne zaman kullan¿lmal¿?

* you want to provide a simple interface to a complex subsystem
* Karma¿¿k bir altsisteme basit bir arayüz sa¿lamak istedi¿inde

* there are many dependencies between clients and the implementation classes of an abstraction
* istemciler ve s¿n¿flar aras¿nda çok fazla ba¿l¿l¿klar oldu¿unda

* you want to layer your subsystems, use a facade to define an entry point to each subsystem level 
* Altsistem bir katman istiyorsun, facade kullanarak  her bir altsisteme bir ba¿lang¿ç noktas¿ tan¿mla 
