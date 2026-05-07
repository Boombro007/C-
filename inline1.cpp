#include<iostream>
using namespace std;
inline int cube(int n);
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Cube is "<<cube(a);
    return 0;
}
inline int cube(int n)
{
    return n*n*n;
}