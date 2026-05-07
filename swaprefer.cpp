#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"\n==== BEFORE SWAP ====\n";
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    swap(a,b);
    cout<<"\n==== AFTER SWAP ====\n";
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    return 0;
}
void swap(int &x,int &y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}