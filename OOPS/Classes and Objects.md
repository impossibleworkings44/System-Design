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
