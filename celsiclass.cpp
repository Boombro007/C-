#include<iostream>
using namespace std;

class temp
{
    float f;
    float c;
    public:
    void getdata()
    {
        cout<<"Enter tempreature in Fahrenheit : ";
        cin>>f;
    }
    void convert()
    {
        c = (5.0/9.0) * (f - 32);
    }
    void display()
    {
        cout<<"CELSIUS : "<<c<<endl;
    }
};
int main()
{
    temp t1;
    t1.getdata();
    t1.convert();
    t1.display();
    return 0;   
}