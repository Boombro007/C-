/*
Write a C or C++ program using DMA to create an array of N integer numbers
and to display their average.
*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0,avg = 0;
    cout<<"Enter size of array : ";
    cin>>n;
    int *p = new int[n];
    cout<<"Enter Elements : \n";
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
        sum = sum  + *(p+i);
    }
    avg = sum  / n;
    cout<<"Sum =  "<<sum<<" , Average = "<<avg<<endl;
    return 0;
}