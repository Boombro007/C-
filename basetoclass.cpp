#include<iostream>
using namespace std;
class Time
{
    int hrs;
    int mins;
    public:
    void display()
    {
        cout<<hrs<<" Hours "<<mins<<" Minutes\n";
    }
    Time(int t)
    {
        hrs = t /60;
        mins = t % 60;
    }
    Time()
    {}
};
int main()
{
    int t1;
    Time T1;
    cout<<"Enter Minutes : ";
    cin>>t1;
    T1 = t1;
    T1.display();
    return 0;
}