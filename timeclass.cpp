/*Create a class time with data as hours and minutes.
a. Write a function gettime and puttime to read and display data of time class.
b. Design a function called sum() that accepts two objects as arguments and displays
the sum of two time objects.
*/
#include<iostream>
using namespace std;

class time
{
    int hours;
    int minutes;
    public:
        void gettime();
        void puttime();
        void sum(time t1,time t2);
};

void time :: gettime()
{
    cout<<"==== ENTER DATA ====\n";
    cout<<"Enter Hours:";
    cin>>hours;
    cout<<"Enter Minutes:";
    cin>>minutes;
}

void time :: puttime()
{
    cout<<"\n==== DIPLAY ====\n";
    cout<<hours<<" hours and "<<minutes<<" minutes\n";
}

void time :: sum(time t1,time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = t1.hours + t2.hours;
}

int main()
{
    class time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t1.puttime();
    t2.puttime();
    t3.sum(t1,t2);
    t3.puttime();
    return 0;
}