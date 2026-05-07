#include<iostream>
#include<cstdlib>
using namespace std;
void reverse(int *p,int size)
{
    cout<<"===== REVERSED =====\n";
    for(int i=size;i>=0;i--)
    {
        cout<<*(p+i)<<endl;
    }
}
int main()
{
    int *p;
    int size;
    cout<<"Enter size of array character : ";
    cin>>size;
    p = (int *) malloc (size*sizeof(int));
    if(p == NULL)
    {
        cout<<"Memory not allocated!!\n";
        exit(1);
    }
    cout<<"Enter Elements : \n";
    for(int i=0;i<size;i++)
    {
        cin>>*(p+i);
    }
    reverse(p,size);
    return 0;
}