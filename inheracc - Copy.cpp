#include<iostream>
#include<string>
using namespace std;

class account
{
    protected:
    int accno;
    string name;
    int depo;
    double balance;
    public:
    void getdata()
    {
        cout<<"Enter Account number : ";
        cin>>ws>>accno;
        cout<<"Enter Mane of holder : ";
        getline(cin>>ws,name);
    }
    void deposit()
    {
        cout<<"Enter Amount to deposit : ";
        cin>>depo;
        balance += depo;
    }
    void display()
    {
        cout<<"===== DETAILS =====\n";
        cout<<"NAME : "<<name<<endl;
        cout<<"ACCOUNT NUMBER : "<<accno<<endl;
        cout<<"BALANCE : "<<balance<<endl;
    }
};

class savingacc :public account
{
    float rate;
    int y,withd,amont;
    public:
    void getdata()
    {
        account :: getdata();
        cout<<"Enter Intrest Rate : ";
        cin>>ws>>rate;
        cout<<"Enter Years : ";
        cin>>ws>>y;
    }
    void cal()
    {
        amont = (balance * y * rate) / 100;
        balance += amont;
        cout<<"This much will be added to account "<<amont<<endl;
    }
    void withdrawl()
    {
        cout<<"Enter Amount to withdraw : ";
        cin>>ws>>withd;
        balance -= withd;
    }
    void display()
    {
        account :: display();
        cout<<"RATE : "<<rate<<endl;
        cout<<"YEARS : "<<y<<endl;
    }
};

int main()
{
    savingacc A1;
    A1.getdata();
    A1.deposit();
    A1.withdrawl();
    A1.cal();
    A1.display();
    return 0;
}