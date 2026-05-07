#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a Year : ";
    cin>>year;
    if(year % 4 == 0)
    {
        if(year % 400 == 0)
        {
            cout<<year<<" is leap year!!\n";
        }
    }
    else
    {
        cout<<year<<" is not leap year!!\n";
    }
    return 0;
}