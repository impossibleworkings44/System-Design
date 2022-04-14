#include <bits/stdc++.h>
using namespace std;

class Vehicle {
		string brand;
	public :
		Vehicle(string brand) {
			this->brand = brand;

		}

		string getBrand() {
			return this->brand;
		}

		void honk() {
			cout <<brand << " is honking"<<"\n";
		}
};


class Car : public Vehicle {
		string model;

	public:

	 	Car(string brand, string model): Vehicle(brand)  {

	 		this->model = model;

	 	}

	 	string getModel() {
	 		return this->model;

	 	}

	 	void move() {
	 		cout<<getBrand()<<" "<<model<<" is moving"<<"\n";
	 	}
};


#include <bits/stdc++.h>
using namespace std;

int main() {
	// do not modify the main method
	Vehicle vehicle("Tesla");
	Car car("Tesla", "Model S");
	cout << vehicle.getBrand() << endl;
	vehicle.honk();

	cout << car.getBrand() << " " << car.getModel() << endl;
	car.honk();
	car.move();
	return 0;
}