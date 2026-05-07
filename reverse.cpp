#include<iostream>
using namespace std;
class reverse
{
    int n,r;
    public:
    reverse(int n1)
    {
        n = n1;
        r = 0;
        while(n > 0)
        {
            r = (r * 10) + (n % 10);
            n /= 10;
        }
        cout<<"Reverse Number : "<<r<<endl;
    }
};
int main()
{
    int n2;
    cout<<"Enter a Number : ";
    cin>>n2;
    reverse r(n2);
    return 0;
}