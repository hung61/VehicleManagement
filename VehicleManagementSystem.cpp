#include <iostream>
using namespace std;

// Lop Vehicle dai dien cho phuong tien trong thuc te voi cac thuoc tinh va phuong thuc
class Vehicle{
private:
    string type;      // Loai phuong tien 
    int maxSpeed;     // Toc do toi da
    string fuelType;  // Loai nhien lieu 

public:
    // Ham khoi tao de gan gia tri ban dau cho doi tuong
    Vehicle(string _type, int _maxSpeed, string _fuelType){
        type = _type;
        maxSpeed = _maxSpeed;
        fuelType = _fuelType;
    }
    
    // Tang toc
    void accelerate(){
        cout << "The " << type << " is accelerating to " << maxSpeed << " km/h" << endl;
    }

    // Nap nhien lieu
    void refuel() {
        cout << "The " << type << " is refueling with " << fuelType << endl;
    }

    // Cac phuong thuc getter de lay thong tin cua phuong tien
    string getType(){return type;}
    int getMaxSpeed(){return maxSpeed;}
    string getFuelType(){return fuelType;}
};

int main() {
    cout << "Input informations below: " << endl;
    
    // Nhap loai phuong tien
    cout << "Vehicle type: ";
    string type;
    cin >> type;
    
    // Nhap toc do toi da
    cout << "Max Speed: ";
    int maxSpeed;
    cin >> maxSpeed;

    // Nhap loai nhien lieu
    cout << "Fuel Type: ";
    string fuelType;
    cin >> fuelType;
    cout << endl;

    // Kiem tra toc do co hop le khong
    if (maxSpeed > 0){
        // Tao doi tuong vehicle voi thong tin vua nhap
        Vehicle vehicle(type, maxSpeed, fuelType);
        
        // Hien thi thong tin ve phuong tien
        cout << vehicle.getType() << ": " << endl;
        cout << "Max Speed: " << vehicle.getMaxSpeed() << endl;
        cout << "Fuel Type: " << vehicle.getFuelType() << endl;
        cout << endl;

        // Tang toc
        vehicle.accelerate();

        // Nap nhien lieu
        vehicle.refuel();
    }
}
