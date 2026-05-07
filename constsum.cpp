#include<iostream>
using namespace std;

class complex
{
    private:
    int a,b;
    public:
    complex()
    {
        a=0;b=0;
    }
    complex(int x)
    {
        a=b=x;
    }
    complex(int y,int z)
    {
        a = y;
        b = z;
    }
    void display(complex t)
    {
        cout<<t.a<<" + "<<t.b<<"i"<<endl;
    }
    friend complex sum(complex p,complex q)
    {
        complex r;
        r.a = p.a + q.a;
        r.b = p.b + q.b;
        return r;
    }
};

int main()
{
    complex A(3.4,4.5);
    complex B(3.5);
    complex C;

    C = sum(A,B);
    A.display(A);
    B.display(B);
    cout<<"--------\n";
    C.display(C);
    return 0;
}