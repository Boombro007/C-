/*
-> We can also do may different method in this so try to do with all timeclass
   programs
*/

#include<iostream>
using namespace std;

class Length
{
    private :
    int meter;
    int cm;
    public:
    void getdata();
    void display();
    void sum(Length , Length);
};

void Length :: getdata()
{
    cout<<"Enter meters : ";
    cin>>meter;
    cout<<"Enter centi-meters : ";
    cin>>cm;
}

void Length :: display()
{
    cout<<meter<<" Meters and "<<cm<<" Centi-Meter\n";
}

void Length :: sum(Length l1,Length l2)
{
    cm = l1.cm + l2.cm;
    meter = cm / 100;
    cm = cm % 100;
    meter = l1.meter + l2.meter + meter;
}

int main()
{
    Length L1,L2,L3;
    cout<<"Enter details of object - 1\n ";
    L1.getdata();
    cout<<"Enter details of object - 2\n ";
    L2.getdata();
    L3.sum(L1,L2);
    L1.display();
    L2.display();
    L3.display();
    return 0;
}