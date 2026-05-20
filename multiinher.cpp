#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int width,height;
    void display()
    {
        cout<<width<<" "<<height<<endl;
    }
};
class RectangleArea : public Rectangle
{
    int area;
    public:
    void read_input()
    {
        cin>>width;
        cin>>height;
    }
    void display()
    {
        Rectangle :: display();
        cout<<width*height<<endl;
    }
};
int main()
{
    RectangleArea r1;
    r1.read_input();
    r1.display();
    return 0;
}