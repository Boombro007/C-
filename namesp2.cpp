#include<iostream>
#include<string>
using namespace std;

namespace bhavya
{
    void call()
    {
        cout<<"Name : Bhavya\n";
    }
    double bd = 2109;
}

namespace rudra
{
    void call()
    {
        cout<<"Name : Rudra\n";
    }
    double bd = 1506;
}

using namespace std;
int main()
{
    bhavya :: call();
    cout<<"Birthdate : "<<rudra :: bd<<endl;
    return 0;
}