#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    char  op;
    cout<<"Enter an Opertor : ";
    cin>>op;
    switch (op)
    {
    case '+':
    {
        int sum = a + b;
        cout<<"SUM : "<<sum<<endl;
    } 
    break;
    case '-':
    {
        if(a > b)
        {
            cout<<"SUBSTRACTION : "<<a - b<<endl;
        }
        else
        {
            cout<<"SUBSTRACTION : "<<b - a<<endl;
        }
    }
    break;
    case '/':
    {
        if(b!=0)
        {
            cout<<"DIVISION : "<<a / b<<endl;
        }
    }
    break;
    case '*':
    {
        cout<<"MULTIPLICATION : "<<a*b<<endl;
    }
    break;
    default:
        break;
    }
    return 0;
}