#include<iostream>
using namespace std;

class M
{
    protected:
    int M;
    public:
    void get_m()
    {
        cout<<"Enter M : ";
        cin>>ws>>M;
    }
    void display()
    {
        cout<<"M = "<<M<<endl;
    }
};

class N
{
    protected:
    int N;
    public:
    void get_N()
    {
        cout<<"Enter N : ";
        cin>>N;
    }
    void display()
    {
        cout<<"N = "<<N<<endl;
    }
};

class P : public M , public N
{
    int P;
    public:
    void get_p()
    {
        M :: get_m();
        N :: get_N();
        cout<<"Enter P : ";
        cin>>P;
    }
    void display()
    {
        M :: display();
        N :: display();
        cout<<"P = "<<P<<endl;
    }
};

int main()
{
    P p1;
    p1.get_p();
    p1.display();
    return 0;
}