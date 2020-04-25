#include<iostream>
using namespace std;

class Donor
{
    public:
    string name;
    int age;
    float height;
    float weight;
    string gender;
    string bloodGroup;
    
    void display()
    {
        //Fill your code here
        cout<<"Donor details are :"<<"\n";
        cout<<"Name :"<<name<<"\n";
        cout<<"Age :"<<age<<"\n";
        cout<<"height :"<<height<<"\n";
        cout<<"weight :"<<weight<<"\n";
        cout<<"Gender :"<<gender<<"\n";
        cout<<"Blood Group :"<<bloodGroup<<"\n";
    }
};