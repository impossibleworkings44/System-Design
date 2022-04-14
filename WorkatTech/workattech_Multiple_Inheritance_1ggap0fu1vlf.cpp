#include <bits/stdc++.h>
using namespace std;

class Phone {

	int ram;
	int storage;
	string brand;
	string model;

public:
	Phone(string brand, string model, int ram, int storage) {
		this->brand = brand;
		this->model = model;
		this->ram = ram;
		this->storage = storage;
	}

		string getBrand() {
			return this->brand;
		}

		string getModel() {
			return this->model;
		}

		int getRam() {
			return this->ram;
		}

		int getStorage() {
			return this->storage;
		}

		void dialCall(string number) {
			cout << "Calling " << number << " from " << brand << ":" << model << "\n";
		}

		void receiveCall(string number) {

	cout<< "Receiving call from "<<number<<" on "<<brand<<":"<<model<<"\n";
		}
};

	class Camera {
		double resolution;
	public:
		Camera(double resolution) {
			this->resolution = resolution;
		}

		double getResolution() {
			return this->resolution;
		}

		void clickPhoto() {

			cout << "Clicking photo on " << resolution << " MP" << "\n";
		}
	};

	class CameraPhone: public Phone, public Camera {
	public:

		CameraPhone(string brand, string model, int ram, int storage, double resolution) : Phone(brand, model, ram, storage) , Camera(resolution) {

		}
	};


int main() {
	// do not modify the main method
	Phone phone("Apple", "iPhone", 4, 64);
	Camera camera(24.1);
	CameraPhone cameraPhone("Apple", "iPhone 8", 4, 64, 12);
	
	cout << phone.getBrand() << " " << phone.getModel() << " " << phone.getRam() << " " << phone.getStorage() << endl;
	phone.dialCall("9732130450");
	phone.receiveCall("9732130450");
	
	cout << camera.getResolution() << endl;
	camera.clickPhoto();
	
	cout << cameraPhone.getBrand() << " " << cameraPhone.getModel() << " " << cameraPhone.getRam() << " " << cameraPhone.getStorage() << " " << cameraPhone.getResolution() << endl;
	cameraPhone.dialCall("9732130450");
	cameraPhone.receiveCall("9732130450");
	cameraPhone.clickPhoto();
	return 0;
}
