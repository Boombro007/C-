#include<iostream>
#include<math.h>
using namespace std;
class shape
{
    public:
    float l,w;
};
class circle : public shape
{
    float care;
    float cvol;
    public:
    void cget()
    {
        cout<<"Enter Radius : ";
        cin>>l;
    }
    void ccal()
    {
        care = 2 * 3.14 * l;
        cvol = l * l * 3.14;
    }
    void cdis()
    {
        cout<<"RADIUS : "<<l<<endl;
        cout<<"AREA : "<<care<<endl;
        cout<<"VOLUME : "<<cvol<<endl;
    }
};
class triangle : public shape
{
    int tare;
    int tvol;
    public:
    void tget()
    {
        cout<<"Enter base & height : ";
        cin>>l>>w;
    }
    void tcal()
    {
        tare = (0.5) * l * w;
    }
    void tdis()
    {
        cout<<"BASE : "<<l<<endl;
        cout<<"HEIGHT : "<<w<<endl;
        cout<<"AREA : "<<tare<<endl;
        cout<<"VOLUME not avaiable !!\n";
    }
};
class rectangle : public shape
{
    int rare;
    int rvol;
    public:
    void rget()
    {
        cout<<"Enter base & height : ";
        cin>>l>>w;
    }
    void rcal()
    {
        rare = l * w;
        rvol = 2*(l+w);
    }
    void rdis()
    {
        cout<<"BASE : "<<l<<endl;
        cout<<"HEIGHT : "<<w<<endl;
        cout<<"AREA : "<<rare<<endl;
        cout<<"VOLUME : "<<rvol<<endl;
    }
};
int main()  
{
    int ch;
    cout<<"MENU : \n1 - CIRCLE\n2 - TRIANGLE\n3 - RECTANGLE\n";
    cin>>ch;
    if(ch == 1)
    {
        circle c;
        c.cget();
        c.ccal();
        c.cdis();
    }
    else if(ch == 2)
    {
        triangle t;
        t.tget();
        t.tcal();
        t.tdis();
    }
    else if(ch == 3)
    {
        rectangle r;
        r.rget();
        r.rcal();
        r.rdis();
    }
    else
    {
        cout<<"INVALID OPTION\n";
    }
    return 0;
}