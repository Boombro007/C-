#include<iostream>
using namespace std;
class test
{
    int a;
    static int b;
    public:
    void set() { a=b++; }
    void put()
    {
        cout<<a<<endl<<b<<endl;
    }
};
int test::b=5;
int main()
{
    test t1,t2;
    t1.set();
    t2.set();
    t1.put();
    t2.put();
    return 0;
} 