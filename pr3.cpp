#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main()
{
    int a,b;
    cout<<"Enter two numbers to swap:";
    cin>>a>>b;
    cout<<"a = "<<a<<",b = "<<b<<"(Before swap)\n";
    swap(&a,&b);
    cout<<"a = "<<a<<",b = "<<b<<"(After swap)\n";
    return 0;
}
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}