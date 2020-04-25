#include<iostream>
using namespace std;
#include "Employee.h"
class Developer: public Employee{
    private:
    string skills;
    string role;
    
    public:
    Developer(){}
    
    Developer(string name,int experience,int empId,string skills,string role):Employee(name,experience,empId)
    {
        this->skills=skills;
        this->role=role;
    }
    
    void displayDetails()
    {
        //fill your code
        cout<<"Employee Details"<<"\n";
        cout<<"Name : "<<name<<"\n";
        cout<<"Experience : "<<experience<<" years"<<"\n";
        cout<<"Employee Id : "<<empId<<"\n";
        cout<<"Technical Skills : "<<skills<<"\n";
        cout<<"Role : "<<role<<"\n";
    }
};
