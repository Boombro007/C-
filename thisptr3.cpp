#include<iostream>
using namespace std;
class setval
{
    int a,b;
    public:
    setval& setA(int x)
    {
        a = x;
        return *this;
    }
    setval& setB(int y)
    {
        b = y;
        return *this;
    }
    void shoW()
    {
        cout<<"A = "<<a<<"\nB = "<<b<<endl;
    }
};
int main()
{
    setval s;
    s.setA(10).setB(20).shoW();
    return 0;
}