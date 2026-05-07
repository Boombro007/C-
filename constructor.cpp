#include<iostream>
using namespace std;
class test
{
    static int count;
    public:
    test()
    {
        count++;
        cout<<count<<" Consrtuctor Created !!\n";
    }
    ~test()
    {
        count--;
        cout<<count<<" Constructor Destroyed!!\n";
    }
};
int test::count=0;
int main()
{
    cout<<"Outside Block\n";
    test t1,t2;
    {
        cout<<"Inner block!\n";
        test t3;
    }

    return 0;
}