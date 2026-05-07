#include<iostream>
using namespace std;
inline int rectangle(int i,int w);
inline int triangle(int s1,int s2,int s3); 
inline int square(int s);    
int main()
{
    char choice;
    int l,w;
    int a,b,c;
    int s;
    cout<<"---- MENU ----\n";
    cout<<"'R' - Rectangle\n'T' - Triangle\n'S' - Square\n";
    cout<<"Enter Your choice:";
    cin>>choice;
    //rectangle
    if(choice == 'R' || choice == 'r')
    {
        cout<<"\n---- Rectangle ----\n";
        cout<<"Enter length & width Rectangle:";
        cin>>l>>w;
        cout<<"Perimeter of rectangle of height - "<<l<<" & width - "<<w<<" is "<<rectangle(l,w)<<"\n";
    }
    //Triangle
    if(choice == 'T' || choice == 't')
    {
        cout<<"\n---- TRIANGLE ----\n";
        cout<<"Enter three sides of Triangle:";
        cin>>a>>b>>c;
        cout<<"Perimeter of triangle of sides "<<a<<" , "<<b<<" & "<<c<<" is "<<triangle(a,b,c)<<"\n";
    }
    //sqaure
    if(choice == 'S' || choice == 's')
    {
        cout<<"\n---- SQUARE ----\n";
        cout<<"Enter side of Sqaure:";
        cin>>s;
        cout<<"Perimeter of sqaure of side "<<s<<" is "<<square(s)<<"\n";
    }
    return 0;
}
inline int rectangle(int l,int w)
{
    return 2*(l + w);
}
inline int triangle(int s1,int s2,int s3)
{
    return s1+s2+s3;
}
inline int square(int s)
{
    return 4*s;
}