#include<iostream>
using namespace std;
class matrix
{
    int a[100][100];
    int b[100][100];
    int n,m;
    public:
    int retn()
    {
        return n;
    }
    int retm()
    {
        return m;
    }
    void getdata()
    {
        cout<<"Enter Rows & Matrixs : ";
        cin>>n>>m;
        if(n==m)
        {
            cout<<"Enter First Matrix : ";
            for(int i=0;i<n;i++)
            {   
                for(int j=0;j<m;j++)
                {
                   cin>>a[i][j];
                }
            }
            cout<<"Enter Second Matrix : ";
            for(int i=0;i<n;i++)
            {   
                for(int j=0;j<m;j++)
                {
                   cin>>b[i][j];
                }
            }
        }
        else
        {
            cout<<"n != m\n";
        }
    }
    void add()
    {
        cout<<"\n---- FIRST MATRIX ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\n---- SECOND MATRIX ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<b[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\n---- ADDTION ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j] + b[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    void mult()
    {
        cout<<"\n---- FIRST MATRIX ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\n---- SECOND MATRIX ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<b[i][j]<<"\t";
            }
            cout<<endl;
        }
        int mul[100][100];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mul[i][j] = 0;
                for(int k=0;k<n;k++)
                {
                    mul[i][j] += (a[i][k] * b[k][j]);
                }
            }
        }
        cout<<"\n---- MULTIPLICATION ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<mul[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int ch;
    cout<<"MENU : \n1 - ADDITION\n2 - MULTIPLICATION\n";
    cout<<"Enter Your choice : ";
    cin>>ch;
    if(ch == 1)
    {
        matrix m1;
        m1.getdata();
        if(m1.retn() == m1.retm())
        {
            m1.add();
        }
    }
    else if(ch == 2)
    {
        matrix m2;
        m2.getdata();
        if(m2.retn() == m2.retm())
        {
            m2.mult();
        }
    }
    else
    {
        cout<<"INVALID OPTION\n";
    }
    return 0;
}