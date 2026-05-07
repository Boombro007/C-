#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"Enter a string:";
    getline(cin,a);
    cout<<a<<endl;
    /*
    also for character array
    char a[20];
    cin.getline(a,20);
    cout<<a;
    */
    return 0;
}