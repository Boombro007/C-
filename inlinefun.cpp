#include<iostream>
using namespace std;
inline int fact(int n1)
{
    int fact = 1;
    for(int i=1;i<=n1;i++)
    {
        fact *= i;
    }
    return fact;
}
inline int cube(int c1)
{
    return c1*c1*c1;
}
int main()
{
    int ch;
    cout<<"Enter '1' for factorial and '2' for cube : ";
    cin>>ch;
    if(ch == 1)
    {
        int n;
        cout<<"Enter Number for finding factorial : ";
        cin>>n;
        cout<<"Factorial : "<<fact(n)<<endl;
    }
    else if(ch == 2)
    {
        int c;
        cout<<"Enter A number for cube : ";
        cin>>c;
        cout<<"Cube : "<<cube(c);
    }
    return 0;
}