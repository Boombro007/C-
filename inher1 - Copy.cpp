#include<iostream>
using namespace std;

class base
{
    protected:
    int a;
    public:
    void bgetdata()
    {
        cout<<"Enter a number : ";
        cin>>ws>>a;
    }
    void bkite()
    {
        cout<<"a = "<<a<<endl;
        cout<<"this is base class!!\n";
    }
};

class derived : public base
{
    int b;
    public:
    void dgetdata()
    {
        base :: bgetdata();
        cout<<"Enter a number : ";
        cin>>ws>>b;
    }
    void dkite()
    {
        cout<<"b = "<<b<<endl;
        cout<<"This is derived class!!\n";
    }
};

int main()
{
    derived d1;
    d1.dgetdata();
    d1.dkite();
    d1.bkite();
    return 0;
}