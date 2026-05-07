#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Size : ";
    cin>>size;
    int *a = new int [size];
    int **p = new int *[size];
    
    int sum = 0,avg = 0;
    cout<<"Enter elements : \n";
    for(int i=0;i<size;i++)
    {
        cin>>*(a+i);
        p[i] = &a[i];
        sum += *p[i];    
    }
    cout<<"SUM : "<<sum<<endl;
    avg = sum/size;
    cout<<"AVERAGE : "<<avg<<endl;
    return 0;
}