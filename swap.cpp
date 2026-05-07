#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two number for swap:";
    cin>>a>>b;
    cout<<"--- BEFORE SWAP ---\n";
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"--- AFTER SWAP ---\n";
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
    return 0;
}