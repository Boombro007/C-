#include<iostream>
using namespace std;
int main()
{
    int a[3];
    int t;
    cout<<"Enter element of array:\n";
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t; 
            }
        }
    }
    cout<<"MAXIMUM VALUE = "<<a[0];
    return 0;
}