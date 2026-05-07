#include<iostream>
using namespace std;
inline int fact(int n);
inline int cube(int n);
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Factorial is : "<<fact(n)<<endl;
    cout<<"Cube  is : "<<cube(n)<<endl;
    return 0;
}
inline int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f = f * i;
    return f;
}
inline int cube(int n)
{
    return n*n*n;
}