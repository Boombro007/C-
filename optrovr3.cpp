#include<iostream>
using namespace std;
class complex
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter Real part : ";
        cin>>a;
    }
    void display()
    {
        cout<<a<<endl;
    }
    complex operator+(int val)
    {
        complex temp;
        temp.a = a + val;
        return temp;
    }
};
int main()
{
    int val = 2;
    complex c1,c2;
    c1.getdata();
    cout<<"C1 : ";c1.display();
    c2 = c1 + val;
    cout<<"C2 : ";c2.display();
    return 0;
}