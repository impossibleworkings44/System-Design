#include <bits/stdc++.h>
using namespace std;

class Phone {
public:
	string brand;
	string model;
	int ram;
	int storage;
	
	void dialCall(string number) {
		cout << "Calling " << number << " from " << brand << ":" << model << "\n";
	}
	
	void receiveCall(string number) {
		cout << "Receiving call from " << number << " on " << brand << ":" << model << "\n";
	}
};

int main() {
Phone my_iPhone_11;
Phone my_iPhone_xs;
Phone my_oneplus_7t;
my_iPhone_11.brand = "Apple";
my_iPhone_11.model = "iPhone11";
my_iPhone_11.ram = 4;
my_iPhone_11.storage = 64;

cout << my_iPhone_11.brand << " " <<  my_iPhone_11.model << " " <<  my_iPhone_11.ram << " " <<  my_iPhone_11.storage << "\n";

my_iPhone_11.dialCall("9732130450");
my_iPhone_11.receiveCall("9732130450");


my_iPhone_xs.brand = "Apple";
my_iPhone_xs.model = "iPhone XS";
my_iPhone_xs.ram = 4;
my_iPhone_xs.storage = 64;

cout << my_iPhone_xs.brand << " " <<  my_iPhone_xs.model << " " <<  my_iPhone_xs.ram << " " <<  my_iPhone_xs.storage << "\n";

my_iPhone_xs.dialCall("9732130450");
my_iPhone_xs.receiveCall("9732130450");


my_oneplus_7t.brand = "OnePlus";
my_oneplus_7t.model = "7t";
my_oneplus_7t.ram = 8;
my_oneplus_7t.storage = 128;

cout << my_oneplus_7t.brand << " " <<  my_oneplus_7t.model << " " <<  my_oneplus_7t.ram << " " <<  my_oneplus_7t.storage << "\n";

my_oneplus_7t.dialCall("9732130450");
my_oneplus_7t.receiveCall("9732130450");

return 0;
	
}
