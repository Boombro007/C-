/*
Define triangle as a class with all relevant data members with suitable datatype. [6]
Also define separate member functions for i) to set up the dimensions of a
triangle ii) to calculate and return area of a triangle. Write an appropriate main)
to demonstrate object creation and use of member functions.
*/
#include<iostream>
using namespace std;

class triangle
{
    private :
    int s1,s2,s3;
    public :
        void getdata();
        int cal(int s1,int s2,int s3);
        void print();
};

void triangle :: getdata()
{
    cout<<"Enter side - 1 : ";
    cin>>s1;
    cout<<"Enter side - 2 : ";
    cin>>s2;
    cout<<"Enter side - 3 : ";
    cin>>s3;
}

int triangle :: cal(int s1,int s2,int s3)
{
    int area;
    area = s1+s2+s3;
    return area;
}

void triangle :: print()
{
    cout<<"AREA  : "<<cal(s1,s2,s3)<<endl;
}

int main()
{
    class triangle t1;
    t1.getdata();
    t1.print();
    return 0;
}