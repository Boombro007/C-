#include<iostream>
using namespace std;
class bank
{
    int accno;
    string name;
    double balance;
    int with;
    int depo;
    public:
    bank()
    {
        accno = 0;
        name = "UNKNOWN";

    }
    bank(int a,string n,double b)
    {
        accno = a;
        name = n;
        balance = b;
    }
    void withdraw(double w)
    {
        with = w;
        balance -= w;
        cout<<"Transaction Completed !!\n";
    }
    void deposit(double d)
    {
        depo = d;
        balance += d;
        cout<<"Transaction Completed !!\n";
    }
    void display()
    {
        cout<<"NAME : "<<name<<endl;
        cout<<"ACCOUNT NUMBER : "<<accno<<endl;
        cout<<"BALANCE : "<<balance<<endl;
    }
};
int main()
{
    int ch;
    cout<<"MENU : \n1 - Withdraw\n2 - Deposit\n";
    cin>>ch;
    if(ch == 1)
    {
        bank a1(233342,"BHAVYA",100000);
        a1.withdraw(15000);
        a1.display();
    }
    else if(ch == 2)
    {
        bank a2(233342,"BHAVYA",100000);
        a2.deposit(2500);
        a2.display();
    }
    else
    {
        cout<<"INVALID OPTION!!\n";
    }
    return 0;
}