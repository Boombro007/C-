#include<iostream>
using namespace std;
class space
{
    int a;
    int b;
    public:
    void getdata(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    operator- (space &s)
    {
        s.a = -s.a;
        s.b = -s.b;
        
    }
};
int main()
{
    space s1;
    s1.getdata(6,55);
    s1.display();
    space s2;
    s2 = -s1;
    s2.display();
}