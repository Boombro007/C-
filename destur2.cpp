#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"cons\n";
    }
    test(int w)
    {
        cout<<"copy\n";
    }
    ~test()
    {
        cout<<"des\n";
    }
};
int main()
{
    test t;
    test(32);
    cout<<"Kite\n";
    return 0;
}