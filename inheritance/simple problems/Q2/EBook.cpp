#include<iostream>
using namespace std;
#include "PrintedBook.cpp"
class EBook: public Book{
    private:
    string diskType;
    int size;
    
    public:
    EBook(){}
    EBook(string name, string author, int price, string publication,string diskType, int size):Book(name,author,price,publication)
    {
        this->diskType=diskType;
        this->size=size;
    }
    
    void displayDetails()
    {
        //fill your code
    cout<<"EBook Details"<<"\n";
       cout<<"Name : "<<name<<"\n";
       cout<<"Author : "<<author<<"\n";
       cout<<"Price : "<<price<<"\n";
       cout<<"Publication : "<<publication<<"\n";
       cout<<"Disk Type : "<<diskType<<"\n";
       cout<<"Size : "<<size<<" MB"<<"\n";  

    }
};
