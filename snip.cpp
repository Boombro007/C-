#include<iostream>
using namespace std;
int f1(int &,int b);
int main()
{
    int x = 5,y = 3;
    int result = f1(x,y);
    cout<<result<<endl;
    return 0;
}
int f1(int  &a,int b)
{
    if(b == 0)
        return a;
    a++;
    return f1(a,b-1);
}