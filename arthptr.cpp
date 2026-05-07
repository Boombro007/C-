#include<iostream>
using namespace std;
int main()
{
    int a = 23;
    int *p = &a;
    cout<<"Entered 'a' - "<<a<<endl;
    *p = *p + a;
    cout<<"Entered 'a' - "<<a<<endl;
    return 0;
}