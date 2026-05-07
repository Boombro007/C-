#include<iostream>
using namespace std;

int peri(int s);
int peri(int l,int wi);
int peri(int s1,int s2,int s3);

int main()
{
    int s,l,wi,s1,s2,s3;
    cout<<"Enter side of square : \n";
    cin>>s;
    cout<<"Enter length and width of rectangle : \n";
    cin>>l>>wi;
    cout<<"Enter all three sides of triangle : \n";    
    cin>>s1>>s2>>s3;
    cout<<"Perimeter of square : "<<peri(s)<<endl;
    cout<<"Perimeter of recatngle : "<<peri(l,wi)<<endl;
    cout<<"Perimeter of triangle : "<<peri(s1,s2,s3)<<endl;
    return 0;   
}

int peri(int s)
{
    return s+s;
}
int peri(int l,int wi)
{
    return 2*(l+wi);
}
int peri(int s1,int s2,int s3)
{
    return s1+s2+s3;
}