#include<iostream>
using namespace  std;
inline void sum(int a,int b);
int main()
{
    int x,y;
    cout<<"Enter Two numbers:";
    cin>>x>>y;
    sum(x,y);
    return 0;
}
inline void sum(int a,int b)
{
    int summ = a + b;
    cout<<"Sum = "<<summ<<endl;
}