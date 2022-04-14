#include <bits/stdc++.h>
using namespace std;


class ElectronicDevice {
    string brand;
    string model;

public:
    ElectronicDevice(string brand, string model) {

        this->brand = brand;
        this->model = model;
    }

    string getBrand() {
        return this->brand;
    }

    string getModel() {
        return this->model;
    }
};

class Phone : public ElectronicDevice {

    int ram;
    int storage;

public :
    Phone(string brand, string model, int ram, int storage) : ElectronicDevice(brand, model) {
		this->ram = ram;
		this->storage = storage;

    }

    int getRam() {
        return this->ram;
    }

    int getStorage() {
        return this->storage;
    }

    void dialCall(string number) {
        cout<<"Calling "<<number<<" from "<<getBrand()<<":"<<getModel()<<"\n";
    }

    void receiveCall(string number) {
        cout<<"Receiving call from "<<number<<" on "<<getBrand()<<":"<<getModel()<<"\n";
    }

};

class Camera : public ElectronicDevice {
    double resolution;
	string model;
	string brand;

public :
    Camera(string brand, string model, double resolution) : ElectronicDevice(brand,model) {
		this->resolution = resolution;

    }

    double getResolution() {
        return this->resolution;
    }

    void clickPhoto() {
        cout<<"Clicking photo on a "<<resolution<<" MP "<<getBrand()<<":"<<getModel()<<"\n";
    }
};


#include <bits/stdc++.h>
using namespace std;

int main() {
    // do not modify the main method
    Phone phone("Apple", "iPhone", 4, 64);
    Camera camera("Canon", "EOS 1500D", 24.1);
    
    cout << phone.getBrand() << " " << phone.getModel() << " " << phone.getRam() << " " << phone.getStorage() << endl;
    phone.dialCall("9732130450");
    phone.receiveCall("9732130450");
    
    cout << camera.getBrand() << " " << camera.getModel() << " " << camera.getResolution() << endl;
    camera.clickPhoto();
    return 0;
}