#include<iostream>
using namespace std;
class farenheit;
class celsius
{
    float cl;
    public:
    celsius(float c1)
    {
        cl = c1;
    }
    float getcl()
    {
        return cl;
    }
    celsius(const farenheit & f3);
    void display()
    {
        cout<<"Celsius :  "<<cl<<endl;
    }
};
celsius :: celsius(const farenheit & f3)
    {
        cl = (f3.getf() - 35) * (5.0/9.0);
    }
class farenheit
{
    double  ft;
    public:
    farenheit(double f1)
    {
        ft  = f1;
    }
    double getf()
    {
        return ft;
    }
    farenheit(const celsius &c3)
    {
        ft  = (c3.getcl() * (9.0/5.0)) + 35.0;
    }
    void display()
    {
        cout<<"Fahrenheit :  "<<ft<<endl;
    }
};
int main()
{
    celsius c(100);
    farenheit f = c;
    f.display();

    farenheit f2(98.6);
    celsius c2 = f2;
    c2.display();
    return 0;
}