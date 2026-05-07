#include<iostrream>
using namespace std;
class dista
{
    int m;
    int cm;
    public:
    dista(int m1,int cm1)
    {
        m = m1;
        cm = cm1;
    }
    dista(dista &d2)
    {
        dista temp;
        temp.cm = cm + d2.cm;
        m = temp.cm/100;
        temp.m = m + d2.m;
        return temp;
    }
    void display()
    {
        cout<<m<<" Meters & "<<cm<<" Centi-Meters\n";
    }
};
int main()
{
    dista d1(8,90);
    return 0;
}