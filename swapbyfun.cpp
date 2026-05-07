#include<iostream>
using namespace std;

void swap(int *x,int *y);

int main()
{   
    int a,b;
    cout<<"Enter two numbers for swap:\n";
    cin>>a>>b;
    cout<<"--- BEFORE SWAP ---\n";
    cout<<"a = "<<a<<",b = "<<b<<"\n";
    swap(&a,&b);
    cout<<"a = "<<a<<",b = "<<b<<"\n";
    return 0;
}

void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}