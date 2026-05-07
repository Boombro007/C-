#include<iostream>
using namespace std;
inline int findmax(int a,int b);
int findmax(int *arr,int n);
int main()
{
    int a,b;
    int n,ar[100];
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Max Value : "<<findmax(a,b)<<endl;
    cout<<"Enter size of array(max:100):";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Max value : "<<findmax(ar,n);
    return 0;
}
inline int findmax(int a,int b)
{
    return (a>b) ? a : b;
}
int findmax(int *arr,int n)
{
    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    return arr[0];
}