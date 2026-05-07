#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of students:";
    cin>>n;
    int *p = new int[n];
    cout<<"Enter element:\n";
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    cout<<"ELement enterd:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Element = "<<*(p+i)<<endl;
    }
    delete[] p;
    return 0;
}