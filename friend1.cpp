#include<iostream>
using namespace std;
class sample
{
    float a,b;
    public:
        void getdata();
        friend float sum(sample c);
};
void sample :: getdata()
{
    cout<<"Enter Two  numbers :";
    cin>>ws>>a>>b;
}
float sum(sample c)
{
    return float(c.a +c.b);
}
int main()
{
    sample s;
    s.getdata();
    cout<<"Sum : "<<sum(s)<<endl;
    return 0;
}