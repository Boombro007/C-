//Addition of Two numbers in complex 
#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    void getdata()
    {
        cout<<"Enter Real part : ";
        cin>>a;
        cout<<"Enter Imaginery part : ";
        cin>>b;
    }
    void display()
    {
        cout<<a<<" + "<<b<<"i\n";
    }
    complex operator +(complex c4)
    {
        complex temp;
        temp.a = a + c4.a;
        temp.b = b + c4.b;
        return temp;
    }
};
int main()
{
    complex c1,c2;
    c1.getdata();
    c2.getdata();
    cout<<"C1 : ";c1.display();
    cout<<"C2 : ";c2.display();
    complex c3;
    c3 = c1 + c2;
    cout<<"C3 : ";c3.display();
    return 0;
}