
#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class ItemType
{
    private:
        string name;
        double deposit;
        double costPerDay;
    public:
    //fill the code 
        string getName()
    {
        return name;
    }
        void setName(string itemname)
    {
       name=itemname;
    }
    
    double getDeposit()
    {
        return deposit;
    }
    
        void setDeposit(double Deposit)
    {
       this->deposit=Deposit;
    }
    
    double getCostPerDay()
    {
        return costPerDay;
    }
        void setCostPerDay(double CostPerDay)
    {
       this->costPerDay=CostPerDay;
    }
        void display()
        {
            cout<<"Itemtype details:";
    //fill the code 
            cout<<"\n"<<"Name: "<<getName()<<"\n";
            cout<<"Deposit: "<<getDeposit()<<"\n";
            cout<<"Cost Per Day: "<<getCostPerDay()<<"\n";
        }
};
