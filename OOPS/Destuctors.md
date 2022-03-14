* Destructor is an instance member function of a class
* same name as class , preceded by ~ symbol
* Destructor can never be static, doesnt have any return type
* Destructors takes no arguments (no overloading is possible)
* It is invoked implicitly when object is going to destroy
* It should be defined to release resources allocated to an object

```
#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b;
    public :
        
   ~Complex() {    //destructor
       cout<<"destructor called";
   }
};

void fun() {
    Complex c1;
}

int main() {
    fun();
    return 0;
}


```
