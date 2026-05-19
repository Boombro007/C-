#include<iostream>
using namespace std;
class comp
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter two numbers : ";
        cin>>a;
        cin>>b;
    }
    int compa()
    {
        if(this->a > b)
            cout<<a<<endl;
        else if(this -> a < b)
            cout<<b<<endl;
        else
            cout<<"Both are Equal !!\n";
    }
};
int main()
{
    comp c;
    c.getdata();
    c.compa();
    return 0;
}