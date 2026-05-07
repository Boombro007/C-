#include<iostream>
using namespace std;
class test
{
    int count = 0;
    public:
    test()
    {
        count++;
        cout<<count<<" Constructor creadted!!\n";
    }
    ~test()
    {
        count--;
        cout<<count<<"Constructor destroyed!!\n";
    }
};
int main()
{
    test t;
    test t1;
    test t2;
    return 0;  
}