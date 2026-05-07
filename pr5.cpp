#include<iostream>
using namespace std;
double area(double c);
double area(double l,double w);
double area(double b,int h);
int main()
{
    double c,l,w,b;
    int h;
    cout<<"Enter radius of circle:";
    cin>>c;
    cout<<"Enter height & width of rectangle:";
    cin>>l>>w;
    cout<<"Enter base & height:";
    cin>>b>>h;
    cout<<"Area of circle of raius "<<c<<" is :"<<area(c)<<endl;
    cout<<"Area of rectangle of height "<<l<<" & width "<<w<<" is :"<<area(l,w)<<endl;
    cout<<"Area of triange of base "<<b<<" & height "<<h<<" is :"<<area(b,h)<<endl;
    return 0;
}
double area(double c)
{
    return 3.14159*c*c;
}
double area(double l,double w)
{
    return 2*(l+w);
}
double area(double b,int h)
{
    return 1/2*b*h;
}