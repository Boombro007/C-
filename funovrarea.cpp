#include<iostream>
#include<iomanip>
using namespace std;

inline area(int s)
{
    return s * s;
}

inline area(float h,float b)
{
    return 0.5 * h * b;
}

inline area(int l,int w)
{
    return l * w;
}

int main()
{
    int s1;//sqaure
    float t1,t2;//triangle
    int r1,r2;//rectangle

    cout<<"Enter Side of square : ";
    cin>>s1;
    int a1 = area(s1);
    cout<<"Area of square : "<<a1<<endl;

    cout<<"Enter Height and base of the triangle : ";
    cin>>t1>>t2;
    float a2 = area(t1,t2);
    cout<<"Area of triangle : "<<fixed<<setprecision(3)<<a2<<endl;

    cout<<"Enter Length and Width of the rectangle : ";
    cin>>r1>>r2;
    int a3 = area(r1,r2);
    cout<<"Area of rectangle : "<<a3<<endl;

    return 0;
}