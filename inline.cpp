#include<iostream>
using namespace std;
inline int fact(int n); 
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Factorial is "<<fact(n);
    return 0;
}
inline int fact(int n)
{
    int i=1,fact=1;
    for(i = 1 ;i <= n;i++)
    {
        fact = fact * i;
    }
    return fact;
}