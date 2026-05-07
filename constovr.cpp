#include<iostream>
using namespace std;

class integer
{
    private :
    int x,y;
    public :
    void display()
    {
        cout<<" ("<<x<<","<<y<<") "<<endl;
    }
    integer()
    {
        x = 10;
        y = 20;
    }
    integer(int a,int b)
    {
        x = a;
        y= b;
    }
};

int main()
{
    integer I1;
    integer I2(21,12);
    I1.display();
    I2.display();
    return 0;
}