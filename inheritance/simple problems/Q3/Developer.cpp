#include<iostream>
using namespace std;
#include "Employee.h"
class Developer: public Employee{
    private:
    string skills;
    string role;
    
    public:
    Developer(){}
    
    //fill your code
    Developer(string name,string gender,int experience,int empId,string skills,string role):Employee(name,gender,experience,empId)
    {
        this->skills = skills;
        this->role = role;
        
    }
    void displayDetails()
    {
        //fill your code
        cout<<"Developer Details"<<"\n";
        cout<<"Name : "<<name<<"\n";
        cout<<"Gender : "<<gender<<"\n";
        cout<<"Experience : "<<experience<<" years"<<"\n";
        cout<<"Employee Id : "<<empId<<"\n";
        cout<<"Technical Skills : "<<skills<<"\n";
        cout<<"Role : "<<role<<"\n";
        
    }
};
