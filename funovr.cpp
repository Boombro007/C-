#include<iostream>
using namespace std;
int num1(int a);
float num2(float b);
char num3(char c);
int main()
{
    int a;
    float b;
    char c;
    cout<<"Enter Integer:";
    cin>>a;
    cout<<"Enter Float:";
    cin>>b;
    cout<<"Enter Character:";
    cin>>c;
    cout<<"Integer: "<<num1(a)<<endl;
    cout<<"Float: "<<num2(b)<<endl;
    cout<<"Character: "<<num3(c)<<endl;
    return 0;
}
int num1(int a)
{
    return a;
}
float num2(float b)
{
    return b;   
}
char num3(char c)
{
    return c;
}