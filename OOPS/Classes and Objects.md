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

```
//program to add  2 numbers

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
    
    Complex add(Complex c) {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main() {
    Complex c1,c2,c3; 
    c1.set_data(3,7);
    c2.set_data(4,5);
    c3 = c1.add(c2);
    c3.show_data();
}

```
