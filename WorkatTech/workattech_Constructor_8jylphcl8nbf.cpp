#include <bits/stdc++.h>
using namespace std;

class Phone {
public:
	string brand;
	string model;
	int ram;
	int storage;
	
	//default constructor
	Phone () {

	}

	//parameterized constructor
	//no return type , creates objects for a class and is special fn

	Phone (string brandValue, string modelValue, int ramValue, int storageValue) 	{

		brand = brandValue;
		model = modelValue;
		ram = ramValue;
		storage = storageValue;
  }

	void dialCall(string number) {
		cout << "Calling " << number << " from " << brand << ":" << model << "\n";
	}
	
	void receiveCall(string number) {
		cout << "Receiving call from " << number << " on " << brand << ":" << model << "\n";
	}
};

int main() {
Phone my_iPhone_11("Apple", "iPhone11", 4, 64);
Phone my_iPhone_xs("Apple", "iPhone XS", 4, 64);
Phone my_oneplus_7t("OnePlus", "7t", 8, 128);



my_iPhone_11.dialCall("9732130450");
my_iPhone_11.receiveCall("9732130450");



my_iPhone_xs.dialCall("9732130450");
my_iPhone_xs.receiveCall("9732130450");



my_oneplus_7t.dialCall("9732130450");
my_oneplus_7t.receiveCall("9732130450");

return 0;
	
}
