#### We need a Programming paradigm that can help to :
* Represent Entities
* Relationship
, so we go for the ObjectOriented Programming

* Class : Is a type/Blueprint , eg : person , vehicle
* Object : Is an instance of class , eg Nitin eats fast , walks slow 
* Constructor : Used to create object out of  a class

```
public class Person {

	String name;
	int age;
	Stringe gender;
	
	public void eat() {
		System.out.println("eating");
	}
	
	//constructor
	public Person(String name, int age , String gender) {
		this.name = name;
		this.age = age;
		this.gender =gender;
	}
}


public class Test() {
	public static void main(String[] args) {
		Person p = new Person(name:"nitin", age:23, gender:"male");
	}

// here p is the object of type Person
}
```
##### 1st Object Oriented Principle 
**1) Abstraction** : means displaying only essential information and hiding the details
eg : driving a vehicle

Adv of Abstraction :
- Simplicity (easy for customers)
- security
- we can upgrade/improve the implementation w/o impactiing end users

**2) Encapsulation **: : Binding of data and functions together into a single unit such that they are kept both safe from outside interference and misuse
* Has Access Modifier : public, private, protected
* 	fields private ( no direct modification)
* methods public ( modif. can be done under control)


```
class Person() {
	private string Name;
	public void setName(name) {
		this.name = name;
	}
	
	public void getName() {
		return this.name;
	}
}

```


3) **Inheritance** : solves for the problem of relationship
* Inheritance is a mechanism in which one class acquires the property of another class. 
* For example, a child inherits the traits of his/her parents.
* **extends** : used when parent is a class
* **interface** : when prarent is an interface
* multiple inheritance not allowed in java ? why ?

```
public class Animal() {
	public void eat() {
		System.out.println('eat something')
	}
}

public class Dog extends Animal() {
	//dog is the child class of animal
	//it will get all stuff of Animal class
}

public class Test() {
	public static void main(String[] args) {
		Dog d = new Dog();
		d.eat();
	}

```
*** isA** :: c1 isA c2 => c1 is child of parent class c2

Advantages of Inheritance
* code reusability
* extendiability ->(method overriding)
* build relationships

**Relationship Possession** ::
* hasA :: c1 hasAc2 

**Composition :** (hasA)
1. Aggregation 
eg :
```
class HumanBody() {
	Heart heart;
}
	class Heart(){

	}
//here the class heart can't exist without humanbody
```
2. Association
```
class College() {
}
	class Professor(){

	}
//here the class professor can exist without class College
```

4) **Polymorphism**
* Many forms
1) Compile/Static Polymorphism  :: achieved by method overloading
* method overloading : when you have two or more methods of same number but with diff arguments/signatgures
eg 
```
//eg of method overloading
class Calculator() {
	public int add(int a, int b) {
		return a+b;
	}
	
	public int add(int a, int b ,  int c) {
		return a+b+c;
	}
}
```
2) Runtime Polymorphism










