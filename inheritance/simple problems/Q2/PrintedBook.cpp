#include<iostream>
using namespace std;
#include "Book.h"
class PrintedBook: public Book{
    private:
    int numOfPages;
    string paperType;
    
    public:
    PrintedBook(){}
    //fill your code
    PrintedBook(string name, string author, int price, string publication, int numOfPages, string paperType):Book(name, author, price, publication) 
    {
        this->numOfPages=numOfPages;
        this->paperType=paperType;

    }
    void displayDetails()
    {
       //fill your code
       cout<<"Printed Book Details"<<"\n";
//       cout<<"Name : "<<name<<"\n";
       cout<<"Name : "<<name<<"\n";
       cout<<"Author : "<<author<<"\n";
       cout<<"Price : "<<price<<"\n";
       cout<<"Publication : "<<publication<<"\n";
       cout<<"Number Of Pages : "<<numOfPages<<"\n";
       cout<<"Paper Type : "<<paperType<<"\n";  

    }
};
