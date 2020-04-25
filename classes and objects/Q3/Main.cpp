#include <iostream>
#include<string>
#include<stdio.h>
#include "Donor.cpp"
using namespace std;
int main()
{	  
    //Fill the code
    int n;
    cout<<"Enter the number of donors:"<<"\n";
    cin>>n;
    Donor d[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the donor details"<<i+1<<"\n";
        cout<<"Enter the Name :"<<"\n";
        cin>>d[i].name;
        cout<<"Enter the Age :"<<"\n";
        cin>>d[i].age;
        cout<<"Enter the height :"<<"\n";
        cin>>d[i].height;
        cout<<"Enter the weight :"<<"\n";
        cin>>d[i].weight;
        cout<<"Enter the Gender :"<<"\n";
        cin>>d[i].gender;
        cout<<"Enter the Blood Group :"<<"\n";
        cin>>d[i].bloodGroup;
    }
    cout<<"Donor details in the hospital database :"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Donor"<<i+1<<"\n";
        d[i].display();
    }
}
