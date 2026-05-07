#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Size of array : ";
    cin>>size;
    int *p = new int [size];
    cout<<"Enter Elements : \n";
    for(int i=0;i<size;i++)
    {
        cin>>*(p+i);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(*(p+i) < *(p+j))
            {
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    cout<<"After sorting : ";
    for(int i=0;i<size;i++)
    {
        cout<<*(p+i)<<endl;
    }
    return 0;
}