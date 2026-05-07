#include<iostream>
using namespace std;
class Base
{
    public:
    int b; 
    void show()
    {
        cout<<"b = "<<b<<endl;
    }  
};
class derived : public Base
{
    public:
    int d;
    void show()
    {
        cout<<"b = "<<b<<endl;
        cout<<"d = "<<d<<endl;
    }
};
int main()
{
    Base *bptr;
    derived dr;
    bptr = &dr;
    bptr->b = 100;
    cout<<"Pointing to base element : \n";
    bptr->show();
    derived *dptr;
    dptr = &dr;
    dptr->d = 200;
    cout<<"Pointing to derived element : \n";
    dptr->show();
    return 0;
}