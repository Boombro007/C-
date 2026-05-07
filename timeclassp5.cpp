/*
-> normally using the arguments
-> we can also use call by pointer and call by value in this method
-> Type - 3 But use timeclassp2 and timeclassp3 for other
*/
#include<iostream>
using namespace std;

class Time
{
    private :
    int hours;
    int mins;
    public :
    void getdata();
    void display();
    Time sum(Time);
};

void Time :: getdata()
{
    cout<<"Enter Hours : ";
    cin>>hours;
    cout<<"Enter Minutes :";
    cin>>mins;
}

void Time :: display()
{
    cout<<hours<<" Hours and "<<mins<<" Minutes\n";
}

Time Time :: sum(Time t1)
{
    Time T4;
    T4.mins = mins + t1.mins;
    T4.hours = T4.mins / 60;
    T4.mins = T4.mins % 60;
    T4.hours = T4.hours + t1.hours + hours;
    return(T4);
}

int main()
{
    Time T1,T2,T3;
    cout<<"Enter data of time - 1\n";
    T1.getdata();
    cout<<"Enter data of time - 2\n";
    T2.getdata();
    T1.display();
    T2.display();
    T3 = T1.sum(T2);
    T3.display();
    return 0;
}