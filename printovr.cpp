#include<iostream>
using namespace std;

void print(int i1)
{
    cin>>i1;
}

void print(float f1)
{
    cin>>f1;
}

void print(char c1)
{
    cin>>c1;
}

void print(double d1)
{
    cin>>d1;
}

void print(bool b1)
{
    cin>>b1;
}

int main()
{
    int i;
    cout<<"Enter Integer : ";
    print(i);

    float f;
    cout<<"Enter float : ";
    print(f);

    char c;
    cout<<"Enter character : ";
    print(c);

    double d;
    cout<<"Enter Double : ";
    print(d);

    bool b;
    cout<<"Enter bool : ";
    print(b);

    return 0;
}