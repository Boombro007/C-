#include<iostream>
using namespace std;

namespace student{
    int a = 5;
    void kite()
    {
        cout<<"This is student namespace\n";
    }
}

namespace faculty{
    int a = 8;
    void kite()
    {
        cout<<"This is faculty namespace\n";
    }
}

using namespace student;
int main()
{
    kite();
    cout<<a;
    return 0;
}