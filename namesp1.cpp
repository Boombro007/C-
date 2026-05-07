#include<iostream>
using namespace  std;

namespace student{
    int a = 21;
    void kite()
    {
        cout<<"Student\n";
    } 
}

namespace faculty{
    int a =12;
    void kite()
    {
        cout<<"Faculty\n";
    }
}

using namespace student;
using namespace faculty;
int main()
{
    cout<<student::a<<"\n";
    faculty::kite();
    return 0;
}