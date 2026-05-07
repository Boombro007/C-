#include<iostream>
using namespace std;
class print
{
    private :
    int x = 10;
    public :
    void getdata();
    print();
};
void print :: getdata()
{
    cout<<"Enter a number:";
    cin>>x;
}
print :: print()
{
    cout<<x<<endl;
}
int main()
{
    print();
    return 0;
}