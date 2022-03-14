* Operator Overloading : ability to provide the operators with a special meaning for a data type
* Any symbol can be used as a function name 
  * if it is a valid operator in C
  * and it is preceded by operator keyword
* We cannot  overload sizeof and ?: operator

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
    
    Complex operator +(Complex c) { //operator-overloading
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
    c3 = c1+c2; //operator-overloading // or c3 = c1.operator+(c2);
    c3.show_data();
}

