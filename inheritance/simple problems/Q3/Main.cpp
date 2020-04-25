#include <iostream>
using namespace std;
#include "Developer.cpp"
int main()
{
    string name,skills,role,gender;
    int empId,experience;
    //fill your code
    cout<<"Enter the name"<<"\n";
    cin>>name;
    cout<<"Enter the gender"<<"\n";
    cin>>gender;
    cout<<"Enter the experience"<<"\n";
    cin>>experience;
    cout<<"Enter the employee id"<<"\n";
    cin>>empId;
    cout<<"Enter the technical skills of the developer"<<"\n";
    cin>>skills;
    cout<<"Enter the role of the developer"<<"\n";
    cin>>role;
    Developer d(name,gender,experience,empId,skills,role);
    d.displayDetails();
    
    return 0;
}
