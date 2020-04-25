#include <iostream>
using namespace std;
#include "Truck.cpp"

int main(void)
{
    string model,manufacturer,gearType,fuelType,size;
    int year,cargoCapacity;
    //fill your code
    cout<<"Enter the model of the vehicle"<<"\n";
    cin>>model;
    cout<<"Enter the manufactured year"<<"\n";
    cin>>year;
    cout<<"Enter the name of the manufacturer"<<"\n";
    getline(cin,manufacturer);
    getline(cin,manufacturer);
    cout<<"Enter the gear type of the four wheeler"<<"\n";
    cin>>gearType;
    cout<<"Enter the fuel type of the four wheeler"<<"\n";
    cin>>fuelType;
    cout<<"Enter the cargo capacity of the truck"<<"\n";
    cin>>cargoCapacity;
    cout<<"Enter the size of the truck"<<"\n";
    cin>>size;
    
    Truck t(model,year,manufacturer,gearType,fuelType,cargoCapacity,size);
    t.displayDetails();
    
    return 0;
}
