#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test(){cout<<"Construtor\n";}
    ~test(){cout<<"Destructor\n";}
};
int main()
{
    try
    {
        test t1;
        throw(10);
    }
    catch(int i)
    {
        cout<<"Exception : "<< i <<endl;
    }
    return 0;
}