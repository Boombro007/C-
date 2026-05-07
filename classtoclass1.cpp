#include<iostream>
using namespace std;
class Dollar;
class Rupee
{
    int rupe;
    public:
    Rupee(){}
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
    operator Dollar()
    {
        
    }
};
class Dollar
{
    int dllr;
    public:
    Dollar(){}
    Dollar(int dolr)
    {
        dllr = dolr;
    }
    void display()
    {
        cout<<dllr<<" Dollars\n";
    }
    int gdllr()
    {
        return dllr;
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