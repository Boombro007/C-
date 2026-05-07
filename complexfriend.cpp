#include<iostream>
using namespace std;
class complex
{
    float r;
    float i;
    public:
    void getdata()
    {
        cout<<"Enter Real part : ";
        cin>>r;
        cout<<"Enter Imagenary part : ";
        cin>>i;
    }
    void display()
    {
        cout<<r<<" + "<<i<<"i\n";
    }
    friend complex sum(complex C1,complex C2);
};
complex sum(complex C1 , complex C2)
{
    complex temp;
    temp.i = C1.i + C2.i;
    temp.r = C1.r + C2.r;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    cout<<"Enter C1 : \n";
    c1.getdata();
    cout<<"Enter C2 : \n";
    c2.getdata();
    c3 = sum(c1,c2);
    cout<<"C1 : ";c1.display();
    cout<<"C2 : ";c2.display();
    cout<<"C3 : ";c3.display();
    return 0;
}