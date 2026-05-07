#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class bank
{
    private :
    int accnum;
    string holdername;
    double balance = 100000;
    double deposi,withd;
    public :
        double wi,dop;
        void getdata();
        void deposit();
        void widthdraw();
        void display();
};

void bank :: getdata()
{
    cout<<"\n==== ENTER DATA ====\n";
    cout<<"Enter Your name:";
    getline(cin,holdername);
    cout<<"Enter Account number : ";
    cin>>accnum;
    getchar();
}

void bank :: deposit()
{
    cout<<"\n==== DEPOSIT ====\n";
    cout<<"Enter amount you want to deposit (max : 20000): ";
    cin>>deposi;
    balance += deposi;

}

void bank :: widthdraw()
{
    cout<<"\n==== WITHDRAW ====\n";
    cout<<"Enter amount you want to Withdraw (max : 20,000): ";
    cin>>withd;
    if(withd <= 20000)
    {
        cout<<"Transacition Succesful\n";
        balance -= withd;
    }
    else
    {
        cout<<"Transaction failed!!\n";
        exit(1);
    }
}

void bank :: display()
{
    cout<<"\n==== DETAILS ====\n";
    cout<<"NAME : "<<holdername<<endl;
    cout<<"ACCOUNT NUMBER : "<<accnum<<endl;
    cout<<"BALANCE : "<<balance<<endl;
}

int main()
{
    class bank c1;
    int ch;
    cout<<"1 - Widthdraw\n2 - Deposit\n";
    cin>>ch;
    getchar();
    if(ch == 1)
    {
        c1.getdata();
        c1.widthdraw();
        c1.display();
    }
        else if(ch == 2)
    {
        c1.getdata();
        c1.deposit();
        c1.display();    
    }
    return 0;
}