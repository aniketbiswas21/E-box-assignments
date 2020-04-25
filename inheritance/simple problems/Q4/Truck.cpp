#include<iostream>
using namespace std;
#include "FourWheeler.h"
#include "Vehicle.h"

class Truck: public FourWheeler, public Vehicle{
    private:
    int cargoCapacity;
    string size;
    
    public:
    Truck(){}
    //fill your code
    Truck(string model, int year, string manufacturer, string gearType, string fuelType, int cargoCapacity, string size):FourWheeler(gearType, fuelType),Vehicle(model, year, manufacturer){
        this->cargoCapacity = cargoCapacity;
        this->size = size;

    }
    
    void displayDetails()
    {
        //fill your code
        cout<<"Truck Details"<<"\n";
        cout<<"Model : "<<model<<"\n";
        cout<<"Year : "<<year<<"\n";
        cout<<"Manufacturer : "<<manufacturer<<"\n";
        cout<<"Gear Type : "<<gearType<<"\n";
        cout<<"Fuel Type : "<<fuelType<<"\n";
        cout<<"Cargo Capacity : "<<cargoCapacity<<" MT"<<"\n";
        cout<<"Size : "<<size<<"\n";



    }
};