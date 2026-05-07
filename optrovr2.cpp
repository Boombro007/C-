#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    void getdata()
    {
        cout<<"Enter a Real part : ";
        cin>>a;
        cout<<"Enter A Imaginery part : ";
        cin>>b;
    }
    void display()
    {
        cout<<a<<" + "<<b<<" i\n";
    }
    friend complex operator +(complex C1,complex C2);
};
complex operator+(complex C1,complex C2)
{
    complex temp;
    temp.a = C1.a + C2.a;
    temp.b = C1.b + C2.b;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    cout<<"Enter C1 : \n";c1.getdata();
    cout<<"Enter C2 : \n";c2.getdata();
    cout<<"C1 : ";c1.display();
    cout<<"C2 : ";c2.display();
    c3 = c1 + c2;
    cout<<"C3 : ";c3.display();
    return 0;
}