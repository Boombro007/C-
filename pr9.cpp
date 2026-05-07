#include<iostream>
#include<cstdlib>
void maxmin(int *p,int n);
using namespace std;
int main()
{
    int *p,n;
    cout<<"Enter size : ";
    cin>>n;
    p = (int *)calloc(n,sizeof(int));
    if(p == NULL)
    {
        cout<<"Memory not allocated !!\n";
        exit(1);
    }
    cout<<"Enter element : \n";
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    maxmin(p,n);
    free(p);
    return 0;   
}
void maxmin(int *p,int n)
{
    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(*(p+i) > *(p+j))
            {
                t = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
            }
        }
    }
    cout<<"Maxmum : "<<*(p+0)<<endl;
}