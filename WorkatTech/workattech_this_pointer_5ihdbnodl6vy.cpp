#include <bits/stdc++.h>
using namespace std;

/*
 * Note that "this->" is mandatory only when we've another variable with the same name as a class member, i.e., when there is ambiguity between a variable name and a class member. This is why we didn't have to use this-> when we were using a different parameter name.
 
 */
class CalculatorApp {
	
private:
	string name;
	string icon;
	string theme;

	public:
	
	CalculatorApp(string name, string icon, string theme) {

		this->name = name;
		this->icon = icon;
		this->theme = theme;
	}

	string getName() {
		return name;
	}

	string getIcon() {
		return icon;
	}

	string getTheme() {
		return theme;
	}

	void setTheme(string theme) {
		this->theme = theme;
	}

	int plus(int first , int second) {
	 	return (first+second);
	}

	int minus(int first , int second) {

	 		return (first-second);
	}

	int multiply(int first , int second) {

	 	return (first*second);
	}

	int divide(int first , int second) {
	 	
	 		return (first/second);
	}
};

int main() {
	// DO NOT MODIFY THE MAIN METHOD
	CalculatorApp calculator ("Calculator", "/icon/calculator.jpg", "Light");
	cout << "Name: " << calculator.getName() << endl;
	cout << "Icon: " << calculator.getIcon() << endl;
	cout << "Theme: " << calculator.getTheme() << endl;
	calculator.setTheme("Dark");
	cout << "Theme (after theme change): " << calculator.getTheme() << endl;
	
	int firstNumber = 42, secondNumber = 8;
	cout << "Plus: " << calculator.plus(firstNumber, secondNumber) << endl;
	cout << "Minus: " << calculator.minus(firstNumber, secondNumber) << endl;
	cout << "Multiply: " << calculator.multiply(firstNumber, secondNumber) << endl;
	cout << "Divide: " << calculator.divide(firstNumber, secondNumber);
	return 0;
}