#include<iostream>
#include<cstdlib>
void sort(int *p,int size);
using namespace std;
int main()
{
    int *p,size;
    cout<<"Enter size : ";
    cin>>size;
    p = (int *)malloc(size*sizeof(int));
    if(p == NULL)
    {
        cout<<"Memory not allocated !!\n";
        exit(1);
    }
    cout<<"Enter Element : \n";
    for(int i=0;i<size;i++)
    {
        cin>>*(p+i);
    }    
    sort(p,size);
    return 0;
}
void sort(int *p,int size)
{
    int t;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(*(p+i) < *(p+j))
            {
                t= *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
            }
        }
    }
    cout<<"Sorted : \n";
    for(int i=0;i<size;i++)
    {
        cout<<*(p+i)<<endl;
    }
    free(p);
}