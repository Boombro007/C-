#include<iostream>
using namespace  std;
int main()
{
    int choice,n;
    char op;
    cout<<"---- MENU ----\n";
    cout<<"1 -Right hand Triangle\n2 - Inverted Triangle\n3 - Mirrored Triangle\n4 - Pyramid\n5 - Flyod's Triangle\n5 - upper Triangle\n";
    cout<<"---- CHOICE ----\n";
    cout<<"Enter Your choice:";
    cin>>choice;
    cout<<"Enter Rows:";
    cin>>n;
    cout<<"Enter Character you want to print:";
    cin>>op;
    //right hand
    if(choice == 1)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cout<<op;
            }
            cout<<"\n";
        }
    }
    //inverted 
    else if(choice == 2)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n-i;j++)
            {
                cout<<" ";
            }
            for(int k=0;k<=2*n-i;k++)
            {
                cout<<op;
            }
            cout<<"\n";
        }
    }
    return 0;
}