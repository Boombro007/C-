#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int trans[3][3];
    cout<<"Enter element of matrix:";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            trans[i][j] = a[j][i];
        }
    }
    cout<<"---- ORIGINAL MATRIX ----"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"---- TRANSPOSE MATRIX ----"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" "<<trans[i][j];
        }
        cout<<endl;
    }
    return 0;
}