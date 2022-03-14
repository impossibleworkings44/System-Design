* Friend Function is nto a member function of a class to which it is a friend
* Friend Function declared in the class with Friend Keyword
* It must be defined outside the class to which it is a friend
* Friend func can access any member of the class to which it is a friend
* Friend fn can't access members of the class directly
* It has no caller object
* It should not be defined with membership label(class name, eg : void Complex :: fun() )

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
   
   friend void fun(Complex);    //friend function
};

void fun(Complex c1) {  //cant access members directly
    cout<<"sum is "<<c1.a+c1.b;
}

int main() {
    Complex c2;
    c2.set_data(4,6);
    c2.show_data();
    fun(c2);
    
}
```

* Friend func can be friend to more han one class
```
//program to add  2 numbers

#include<bits/stdc++.h>
using namespace std;

class B;
class A {
    private:
        int a;
    public:
        friend void fun(A,B);
};

class B {
    private:
        int b;
    public:
        friend void fun(A,B);
};


void fun(A a1, B b1) {  //cant access members directly
    cout<<"sum is "<<a1.a+b1.b;
}

int main() {
    A obj1;
    B obj2;
    fun(obj1, obj2);
}

```

