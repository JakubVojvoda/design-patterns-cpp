## Builder

Builder pattern has creational purpose and separates the construction of a complex object 
from its representation so that the same construction process can create different 
representations. It is object pattern, ie. relationships can be changed at run-time
and are more dynamic. Often is used for building composite structures but constructing
objects requires more domain knowledge of the client than using a Factory.

Builder deseni, oluşturma amacına sahiptir ve karmaşık bir nesnenin yapısını temsilinden ayırır, böylece aynı yapım süreci farklı gösterimler oluşturabilir. Nesne desenidir yani, ilişkiler çalışma zamanında değiştirilebilir ve daha dinamiktir. Genellikle, kompozit yapılar oluşturmak için kullanılır, ancak nesneler inşa etmek, bir Fabrika kullanmaktan çok, istemciye daha fazla alan bilgisi gerektirir.


### When to use

* the algorithm for creating a object should be independent of the parts and how they're assembled
* the construction process must allow different representations for the object that's constructed  
