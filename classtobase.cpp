#include<iostream>
using namespace std;
class Time
{
    int hrs;
    int mins;
    public:
    Time(){}
    Time(int h,int m)
    {
        hrs = h;
        mins = m; 
    }
    operator int()
    {
        int total = (hrs * 60) + mins;
        return total;
    }
};
int main()
{
    int totalmins;
    Time T1(2,30);
    totalmins = T1;
    cout<<"Total minutes : "<<totalmins<<endl;
    return 0;
}