#include<iostream>
#include<string>
using namespace std;

void print(int a);
void print(float b);
void print(char c);
void print(string d);

int main()
{
    int a;
    float b;
    char c;
    string d;
    cout<<"Enter Integer : ";
    cin>>a;
    cout<<"Enter FLoat : ";
    cin>>b;
    cout<<"Enter Character : ";
    cin>>c;
    cout<<"Enter A string : ";
    cin>>d;
    print(a);
    print(b);
    print(c);
    print(d);
    return 0;
}

void print(int a)
{
    cout<<"A = "<<a<<endl;
}
void print(float b)
{
    cout<<"B = "<<b<<endl;
}
void print(char c)
{
    cout<<"C = "<<c<<endl;
}
void print(string d)
{
    cout<<"D = "<<d<<endl;
}