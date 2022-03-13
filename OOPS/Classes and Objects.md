```
#include<bits/stdc++.h>
using namespace std;

class Complex {
    private: 
    int a, b;
    
    public :
    void set_data(int x, int y) {
        a = x;
        y = b;
    }
    
    void show_data() {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};

int main() {
    Complex c1; //c1 is an object
    c1.set_data(3,7);
    c1.show_data();
}
```

* Diff between Structure and Class , the members of class by default are private
```
//declaring member fn outside a class
class Complex {
    private: 
    int a, b;   // this is a data member(data variables)
    
    public :
    void set_data(int , int)  //this is a member function
    void show_data() {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};

void Complex :: set_data(int x, int y) {
     a = x;
     b = y;
 }

```
* syntax : returnMethod clasName :: memberfunctionName
* Data members are the data variables and member functions are the functions used to manipulate these variable
