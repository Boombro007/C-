#include<iostream>
using namespace std;
int main()
{
    int n,i=0,j=0,k=0;
    char choice;
    cout<<"Enter rows:";
    cin>>n;
    cout<<"Enter Character:";
    cin>>choice;
    for(i=0;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<" "<<choice;
        }
        cout<<endl;
    }
    return 0;
}