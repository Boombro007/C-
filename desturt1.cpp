#include<iostream>
using namespace std;

class test
{
    static int count;
    public:

    test()
    {
        count++;
        cout<<count<<" Constructor \n";
    }
    ~test()
    {
        count--;
        cout<<count<<" Destructor \n";
    }
};

int test :: count = 0;

int main()
{
    test t1;
    return 0;
}