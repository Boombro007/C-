#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year for check:";
    cin>>year;
    if(year % 4 == 0)
    {
        cout<<year<<" IS LEAP YEAR\n";
    }
    else if(year % 100 == 0)
    {
        cout<<""<<year<<" IS NOT LEAP YEAR\n";
    }
    else if(year % 400 == 0)
    {
        cout<<""<<year<<" IS LEAP YEAR\n";
    }
    else
    {
        cout<<""<<year<<" IS NOT LEAP YEAR\n";
    }
    return 0;
}