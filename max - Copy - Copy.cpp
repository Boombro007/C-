#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i=0;
    cout<<"Enter number of array(max:100):";
    cin>>n;
    for(i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    int t;
    for(i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    cout<<"---- SORTED MATRIX ----"<<endl;
    for(i =0 ;i<n;i++)
    {
        cout<<""<<a[i];
        cout<<endl;
    }
    cout<<"---- LARGEST & SMALLEST ----"<<endl;
    cout<<"Smallest : "<<a[0]<<endl;
    for(i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    cout<<"Largest : "<<a[0]<<endl;
    return 0;
}