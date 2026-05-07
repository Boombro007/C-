/*Volume of 3D Shapes
pi = 3.14159*/
#include<iostream>
using namespace std;
float cube(float s)
{
    return s*s*s;
}
float cyclinder(float h,float *r)
{
    return 3.14159*(*r * *r)*h;
}
float sphere(float r1)
{
    return (4/3)*3.14159*r1*r1*r1;
}
int main()
{
    int choice;
    cout<<"----MENU ----\n1 - CUBE\n2 - CYCLINDER\n3 - SPHERE\n";
    cout<<"Enter Your choice:";
    cin>>choice;
    //cube
    float s,h,r,r1;
    if(choice == 1)
    {
        cout<<"---- CUBE ----\n";
        cout<<"Enter side of cube:";
        cin>>s;
        cout<<"Volume of Cube of side "<<s<<" is "<<cube(s)<<"\n";
    }
    //cycliner
    else if(choice == 2)
    {
        cout<<"---- CYCLINDER ----\n";
        cout<<"Enter height & radius of cyclinder:";
        cin>>h>>r;
        cout<<"Volume of Cyclinder of height - "<<h<<" & radius - "<<r<<" is "<<cyclinder(h,&r)<<"\n";
    }
    //sphere
    else if(choice == 3)
    {
        cout<<"---- SPHERE ----\n";
        cout<<"Enter radius of sphere:";
        cin>>r1;
        cout<<"Volume of Sphere of radius "<<r1<<" is "<<sphere(r1)<<"\n";
    }
    else
        cout<<"Invlid choice\n";
    return 0;
}