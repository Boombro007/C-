#include<iostream>
using namespace std;

class student
{
    private: 
    int x,y;
    public:
    student(int a,int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout<<"ROLL NO. : "<<x<<endl;
        cout<<"ID : "<<y<<endl;
    }
};

int main()
{
    student s1(3,4);
    s1.display();
    return 0;   
}