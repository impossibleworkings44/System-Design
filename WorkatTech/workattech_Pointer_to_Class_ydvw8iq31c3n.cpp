#include <bits/stdc++.h>
using namespace std;

class Phone {
public:
	string brand;
	string model;
	int ram;
	int storage;

	Phone (string brandValue, string modelValue, int ramValue, int storageValue) {
		brand = brandValue;
		model = modelValue;
		ram = ramValue;
		storage = storageValue;
	}
};


int main() {
	//Created phone object
	Phone phone1("Apple", "iPhone 11", 4, 64);

	//Create a pointer variable to object phone
	
	//Print the ram using the arrow operator. Do not use the dot operator.
	//arrow operators can be used on a class pointer but not on pointers of    primitive data types (int, float, etc).
	
	Phone *ptr = &phone1;
	cout<<ptr->ram;
	
	
	
	return 0;
}