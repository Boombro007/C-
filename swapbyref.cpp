#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int t = x;
    x = y;
    y = t;
}
int main()
{
    int a,b;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"Enter B : ";
    cin>>b;
    cout<<"Before Swap : A = "<<a<<",B = "<<b<<endl;
    swap(a,b);
    cout<<"After Swap : A = "<<a<<",B = "<<b<<endl;
    return 0;
}