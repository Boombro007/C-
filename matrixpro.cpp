#include<iostream>
using namespace std;
void print(int a1[][100],int n1,int m1);
void transp(int a2[][100],int n2,int m2);
void squar(int a3[][100],int n3,int m3);
void mult(int a4[][100],int a5[][100],int n4,int m4);
void add(int a6[][100],int a7[][100],int n5,int m5);
int main()
{
    int ch;
    cout<<"MENU : \n1 - Print Matrix\n2 - Transpose\n3 - Square\n4 - Multiplication\n5 - Addition";
    cout<<"\nEnter Your Choice : ";
    cin>>ch;
    int n,m;
    if(ch == 1)
    {
        cout<<"Enter Rows & Columns : ";
        cin>>n>>m;
        int a[100][100];
        if(n==m)
        {
            cout<<"Enter A Matrix : \n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            print(a,n,m);
        }
    }
    else if(ch == 2)
    {
        cout<<"Enter Rows & Columns : ";
        cin>>n>>m;
        int a[100][100];
        if(n==m)
        {
            cout<<"Enter A Matrix : \n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            transp(a,n,m);
        }
    }
    else if(ch == 3)
    {
        cout<<"Enter Rows & Columns : ";
        cin>>n>>m;
        int a[100][100];
        if(n==m)
        {
            cout<<"Enter A Matrix : \n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            squar(a,n,m);
        }
    }
    else if(ch == 4)
    {
        int n,m;
        cout<<"Enter Rows & Colunms : ";
        cin>>n>>m;
        int a[100][100];
        int b[100][100];
        if(n==m)
        {
            cout<<"Enter First Matrix : \n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            cout<<"Enter Second Matrix : \n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>b[i][j];
                }
            }
            mult(a,b,n,m);
        }
    }
    else if(ch == 5)
    {
        int n,m;
        cout<<"Enter Rows & Colunms : ";
        cin>>n>>m;
        int a[100][100];
        int b[100][100];
        if(n==m)
        {
            cout<<"Enter First Matrix : \n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            cout<<"Enter Second Matrix : \n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>b[i][j];
                }
            }
            add(a,b,n,m);
        }
    }
    return 0;
}
void print(int a1[][100],int n1,int m1)
{
    cout<<"\n---- MATRIX ----\n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cout<<a1[i][j]<<"\t";
        }
        cout<<endl;
    }
} 
void transp(int a2[][100],int n2,int m2)
{
    cout<<"\n---- TRANSPOSE ----\n";
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cout<<a2[j][i]<<"\t";
        }
        cout<<"\n";
    }
}
void squar(int a3[][100],int n3,int m3)
{
    cout<<"\n---- SQUARE ----\n";
    for(int i=0;i<n3;i++)
    {
        for(int j=0;j<m3;j++)
        {
            cout<<a3[i][j] * a3[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void mult(int a4[][100],int a5[][100],int n4,int m4)
{
    int mul[100][100];
    for(int i=0;i<n4;i++)
    {
        for(int j=0;j<m4;j++)
        {
            for(int k=0;k<n4;k++)
            {
                mul[i][j] = (a4[i][j] * a5[j][k]) +(a4[i][j] * a5[i][k]);
            }
        }
    }
    cout<<"\n---- MULTIPLICATION ----\n";
    for(int i=0;i<n4;i++)
    {
        for(int j=0;j<m4;j++)
        {
            cout<<mul[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void add(int a6[][100],int a7[][100],int n5,int m5)
{
    for(int i=0;i<n5;i++)
    {
        for(int j=0;j<m5;j++)
        {
            cout<<a6[i][j] + a7[i][j]<<"\t";
        }
        cout<<endl;
    }
}