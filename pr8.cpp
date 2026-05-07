#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char *p;
    int size;
    cout<<"Enter size of character array : ";
    cin>>size;
    p = (char *)malloc(size*sizeof(char));
    if(p == NULL)
    {
        cout<<"Memory not allocated !!\n";
        exit(1);
    }
    cout<<"Enter string : ";
    cin>>p;
    cout<<"\nSTRING : "<<p<<endl;
    free(p);
    return 0;
}