#include <iostream>
#include "EventExport.cpp"
using namespace std;
int main()
{  
    string name;
    string detail;
    string type;
    string organiser;
    int aCount;
    double pExpenses;
    
    int n;
    
    cout<<"Enter the number of events :"<<endl;
    cin>>n;
    
    Event *ob = new Event[n];
    
    for(int i = 0; i<n; i++)
    {
        cout<<"Enter the details of event "<<i+1<<endl;
        
        string dummy;
        getline(cin, dummy);
        
        cout<<"Name :"<<endl;
        getline(cin, name);
        ob[i].setName(name);
        
        cout<<"Detail :"<<endl;
        getline(cin, detail);
        ob[i].setDetail(detail);
        
        cout<<"Type :"<<endl;
        getline(cin, type);
        ob[i].setType(type);
        
        cout<<"Organiser :"<<endl;
        getline(cin, organiser);
        ob[i].setOrganiser(organiser);
        
        cout<<"Attendees Count :"<<endl;
        cin>>aCount;
        ob[i].setAttendeesCount(aCount);
        
        cout<<"Projected Expenses :"<<endl;
        cin>>pExpenses;
        ob[i].setProjectedExpenses(pExpenses);
    }
    
    int i;
        
        cout<<"1. Export all the event details in CSV format"<<endl;
        cout<<"2. Export name and organiser of the given event type"<<endl;
        cin>>i;
        
        EventExport object;
        
        switch(i)
        {
            case 1:
                object.exportCSVFormat(ob, n);
                break;
                
            case 2:
                cout<<"Enter the type"<<endl;
                cin>>type;
                object.exportNameOrganiserInfo(ob, n, type);
                break;
                
            default:
                cout<<"Invalid choice"<<endl;
        }
       
}


