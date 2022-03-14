* Constructor is member function of a class
* The name of constructor is same as that of a class
* It has no return type , so can't use return keyword
* It must be an instance member function
* Constructor is implicitly invoked when an object is created
* Used to solve the problem of initialisation, it is called as soon as the object is created , so sometime it may contain garbage value
* so , constructor (object ko object banata h)(eg : Car ka object bnaya h, aur usmein garbage value hi h , toh shift_gear fn kis kaam ka)

```
#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b;
    public :
        Complex() {
            cout<<"this is constructor";
        }
};

int main() {
    Complex c1;
    return 0;
}

//output : this is constructor

```
- Default Constructor : is a constructor which can be called with no arguments
- Parametrised Constructor : A constructor is called Parameterized Constructor when it accepts a specific number of parameters. 
- Constructor Overloading : concept of having more than one constructor with different parameters so that every constructor can perform a different task

```
#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b;
    public :
        
        Complex(int x, int y) { //parametrised constructor
            a = x;
            b = y;
        }
        
        Complex(int x) {    
            a = x;
        }
        
        Complex() {         //default constructor
            cout<<"this is constructor";
        }
};

int main() {
    Complex c1(3,4);    //object c1 created for class Complex , and then constructor called with value 3,4
    Complex c2(5), c3;
    return 0;
}

```
* (Class ka object create hoga toh constructor call hoga hi)
* Compiler creates default constructor by default , but if we create parameterised constructor , then compiler
* will not create any default constructor

* Copy Constructor : A copy constructor in a Java class is a constructor that creates an object using another object of the same Java class.
```

#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b;
    public :
        
   Complex(Complex &c) {    //copy constructor
       a = c.a;
       b = c.b;
   }
};

int main() {
    Complex c1(3,4);    //object c1 created for class Complex , and then constructor called with value 3,4
    Complex c2(c1);
    return 0;
}

// here we pass value of c1 is reference because else it will again keep calling the constructor,
//leading to infinite no of recursion calls

```
