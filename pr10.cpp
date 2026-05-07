#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char *p;
    int size,nsize;
    cout<<"Enter size : ";
    cin>>size;
    p = (char *)malloc(size*sizeof(char));
    if(p == NULL)
    {
        cout<<"Memory not allocated !!\n";
        exit(1);
    }
    cout<<"Enter String : ";
    cin>>p;
    cout<<"\nString  : "<<p<<endl;
    cout<<"Enter New size : ";
    cin>>nsize;
    p = (char *)realloc(p,nsize);
    if(p == NULL)
    {
        cout<<"Memory not allocated !!\n";
        exit(1);
    }
    cout<<"Sill exist : "<<p<<endl;
    cout<<"\nEnter new string : ";
    cin>>p;
    cout<<"\nNew String : "<<p<<endl;
    free(p);
    return 0;   
}