#include <iostream>
using namespace std;
#include "EBook.cpp"

int main(void)
{
    string diskType,name,author,publication,paperType;
    int size,price,numOfPages;
    int ch;
    //fill your code
    cout<<"Enter the type of book"<<"\n";
    cout<<"1.PrintedBook"<<"\n";
    cout<<"2.EBook"<<"\n";
    cin>>ch;
    if(ch==1){
        cout<<"Enter the book name"<<"\n";
        getline(cin,name);
        getline(cin,name);
        cout<<"Enter the author name"<<"\n";
        getline(cin,author);
        cout<<"Enter the price:"<<"\n";
        cin>>price;
        cout<<"Enter the publication name:"<<"\n";
        getline(cin,publication);
        getline(cin,publication);
        cout<<"Enter the number of pages of the book"<<"\n";
        cin>>numOfPages;
        cout<<"Enter the paper type of the book"<<"\n";
        cin>>paperType;       
        PrintedBook p(name,author,price,publication,numOfPages,paperType);
        p.displayDetails();   
    }
    else if(ch==2)
    {
        cout<<"Enter the book name"<<"\n";
        getline(cin,name);
        getline(cin,name);
        cout<<"Enter the author name"<<"\n";
        getline(cin,author);
        cout<<"Enter the price:"<<"\n";
        cin>>price;
        cout<<"Enter the publication name:"<<"\n";
        getline(cin,publication);
        getline(cin,publication);
        cout<<"Enter the disk type of the book"<<"\n";
        getline(cin,diskType);
        cout<<"Enter the size of the disk"<<"\n";
        cin>>size;
        EBook e(name, author, price, publication, diskType, size);
        e.displayDetails();
    }
    
    
    return 0;
}
