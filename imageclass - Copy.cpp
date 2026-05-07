#include<iostream>
using namespace std;

class image
{
    private:
    int x,y;
    public:
        void getdata();
        void display();
        friend image sum(image , image);
};

void image :: getdata()
{
    cout<<"Enter number : ";
    cin>>x;
    cout<<"Enter coeffient of image : ";
    cin>>y;
}

void image :: display()
{
    cout<<x<<" + "<<y<<"i\n";
}

image sum(image a,image b)
{
    image c;
    c.x = a.x + b.x;
    c.y = a.y + a.y;
    return c;
}

int main()
{
    image p,q,r;
    cout<<"Enter First Equation \n";
    p.getdata();
    cout<<"Enter Second Equation\n";
    q.getdata();
    r = sum(p,q);
    p.display();
    q.display();
    cout<<"--------\n";
    r.display();
    return 0;
}