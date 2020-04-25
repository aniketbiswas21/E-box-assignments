#include <iostream>
#include<string>
#include<stdio.h>
#include "ItemType.cpp"
using namespace std;
int main()
{
	//fill the code 
    string n;
    double Deposit = 0;
    double costPerDay = 0;
    
    
    ItemType i;
    cout<<"Enter name:"<<"\n";
    getline(cin,n);
    cout<<"Enter deposit:"<<"\n";
    cin>>Deposit;
    cout<<"Enter cost Per Day:"<<"\n";
    cin>>costPerDay;
    i.setName(n);
    i.setDeposit(Deposit);
    i.setCostPerDay(costPerDay);
    i.display();
}
