#include<iostream>
using namespace std;
int main()
{
    float div;
    int a,b,rem;
    cout<<"Enter Two number for division:";
    cin>>a>>b;
    div = a / b;
    rem = a % b;
    cout<<"Reminder = "<<div<<"\n";
    cout<<"Qutionet = "<<rem<<"\n";
    return 0;
}