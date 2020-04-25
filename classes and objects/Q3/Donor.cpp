#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Donor
{
    public:
    string name;
    int age;
    float height, weight;
    string gender, bloodGroup;
    
    void display()
    {    	 
        //Fill your code
        cout<<"Name :"<<name<<"\n";
        cout<<"Age :"<<age<<"\n";
        cout<<"height :"<<height<<"\n";
        cout<<"weight :"<<weight<<"\n";
        cout<<"Gender :"<<gender<<"\n";
        cout<<"Blood Group :"<<bloodGroup<<"\n";
        
        
        
    }
};
