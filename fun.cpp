#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a;
    cin>>b;
    cout<<"Sum = "<<add(a,b);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}