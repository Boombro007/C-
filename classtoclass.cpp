#include<iostream>
using namespace std;
class Rupee
{
    int rupe;
    public:
    Rupee(int rp)
    {
        rupe = rp;
    }
    void display()
    {
        cout<<rupe<<" Rupees\n";
    }
    int grupe()
    {
        return rupe;
    }
};
class Dollar
{
    int dllr;
    public:
    Dollar(){}
    Dollar(Rupee rup)
    {
        dllr = rup.grupe() / 80;
    }
    void display()
    {
        cout<<dllr<<" Dollars\n";
    }
};

int main()
{
    Rupee R1(1000);
    Dollar D1;
    D1 = R1;
    R1.display();
    D1.display();
    return 0;
}