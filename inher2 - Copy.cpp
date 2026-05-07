#include<iostream>
using namespace std;

class parent
{   
    protected:
    int a;
    int b;
    int c;
};

class child : public parent
{
    public:
    void access()
    {
        cout<<"Enter A :";
        cin>>a;
        cin>>b;
        cin>>c;
    }
    void display()
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
        cout<<"C = "<<c<<endl;
    }
};

int main()
{
    child c;
    c.access();
    c.display();
    return 0;
}