#include<iostream>
using namespace std;
void maxmin(int *p,int size);
int main()
{
    int *p,size;
    cout<<"Enter size : ";
    cin>>size;
    p = new int [size];
    cout<<"Enter elements :\n";
    for(int i=0;i<size;i++)
    {
        cin>>*(p+i);
    }
    maxmin(p,size);
    delete [] p;
    return 0;
}
void maxmin(int *p,int size)
{
    int t;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(*(p+i) < *(p+j))
            {
                t = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
            }
        }
    }
    cout<<"Minimum : "<<*(p+0)<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(*(p+i) > *(p+j))
            {
                t = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
            }
        }
    }
    cout<<"Maximum : "<<*(p+0)<<endl;
}