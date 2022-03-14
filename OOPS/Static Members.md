```
void fun () {
  static int x; //static local variable
  int y; 
 }
 ```
 * Static local variable has value 0 by default and not a garbage value.
 * variable y memory gets created when the fn is called, whereas as y remains in
 * memory until the program exists

```
// static member variable

#include<bits/stdc++.h>
using namespace std;

class Account {
    private :
    int balance;
    static float roi;   //static member variable/Class  variable
    
    public:
    void set_balance(int b) {
        balance = b;
    }
}

float Account:: roi=3.5; //creating memory for static member variable

int main() {
    Account a1;
}

```

* Static Member Variable(class variable) , it is defined outside the class, its memory creation doesnt depend on class instance
* ie why its called class variable , for any no of class instances , it will be only created once for the whole class.

```
//static member function

#include<bits/stdc++.h>
using namespace std;

class Account {
    private :
    int balance;
    static float roi;   //static member variable/Class  variable
    
    public:
    void set_balance(int b) {
        balance = b;
    }
    
    static set_roi (float r) {
        roi = r;
    }
}

float Account:: roi=3.5;

int main() {
    Account :: set_roi(4.5); //static member function
}

```

* static member function declared with keyword static
* can be invoked with /without object
* can only access static memberof the class
