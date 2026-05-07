#include<iostream>
using namespace std;
void dis(int a);
void dis();
int main()
{   
    char a = 'D';
    dis(a);
    dis();
    return 0;
}
void dis(int a)
{
    cout<<a;
}
void dis()
{
    char a = 'D';
    cout<<a;
}