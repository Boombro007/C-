#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    void getdata(int a)
    {
        this->a = a;
    }
    void dis()
    {
        cout<<"a = "<<a<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter A number : ";
    cin>>n;
    test t;
    t.getdata(n);
    t.dis();
    return 0;
}