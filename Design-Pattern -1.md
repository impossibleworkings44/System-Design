continued......
**Runtime Polymorphism**  (**Method Overloading**(->inheritance) )
* Method Overloading : When parent and child class have same method .
eg :

```
public class Animal(){
	public void eat() {
		System.out.prinltn('animal eats')
	}

	public static void main(String[] args) {
		Dog d = new Dog();
		d.eat();	
		//here dog eat method overrides parent class method
		
		Dog d = new Animal();	//gives compilation err as every animal may note be dog
		Animal a = new Dog(); 
		a.eat();
		
		Animal b = new Animal();
		b.eat();
	}
}

public class Dog extends Animal() {
	public void eat() {
		System.out.println('dog eats');
	}
}
```
#2. Solid Design Principle
*** S - Single-responsiblity Principle.**
* one class should do only 1 thing
* Coupling (relationship between objects, eg like bf&gf)
		1) Tight Coupling
		2) Loose Coupliing
* adv : loosely coupled, 

eg:
```
		class Emplyee() {
		int id;
		String name;
		calculateSalary();
		hireEmployee();
		evaluateEmploy();
	// violates SRP as  change made by one can imact the other
	}
```
*** O - Open-closed Principle.**
* Open for enhancement/feature
*  closed for code changes

-- open for new feature but closed for any tiny changes
</br>
-- How do we fix this problem  ?
```
	//using interface
		interface Animal(){
			public feed();
		}
		
		Dog implements Animal() {
			public feed() {
				System.out.println('Dog is fed');
			}
		}
		
		Class AnimalFeeder {
			public void feedAnimal(Animal a) {
				a.feed();
			}
		}
		//here we dont need to make code changes to AnimalFeeder classs each time
```


*** L - Liskov Substitution Principle.****
* c1 isA c2 is not enough for inheritance
* if your child is not following your method , it is violating the Liskov principle,
and hence inheritance should not be allowed else we get error




