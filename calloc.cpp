#include<iostream>
#include<cstdlib>
using namespace std;
void sort(int *p,int size);
int main()
{
    int *p;
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    p = (int *) calloc(size,size * sizeof(int));
    if(p == NULL)
    {
        cout<<"Memory not allocated!\n";
        exit(1);
    }
    cout<<"Enter elements : \n";
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
                t = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
            }
        }
    }
    cout<<"=== Sorted elements ===\n";
    for(int i=0;i<size;i++)
    {
        cout<<*(p+i)<<endl;
    }
}