#include<iostream>
using namespace std;

class xyz
{
    private:
    int x;
    int y;
    public:
    void getdata()
    {
        cout<<"Enter Number : ";
        cin>>x;
        cout<<"Enter coeffient of imagnery : ";
        cin>>y;
    }
    void display()
    {
        cout<<x<<" + "<<y<<"i\n";
    }
    friend xyz sum(xyz,xyz);
};

xyz sum(xyz a,xyz b)
{
    xyz c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

int main()
{
    xyz p,q,r;
    cout<<"Enter First Equation \n";
    p.getdata();
    cout<<"Enter Second Equation \n";
    q.getdata();
    r = sum(p,q);
    p.display();
    q.display();
    cout<<"-------\n";
    r.display();
    return 0;
}