#include<iostream>
#include<string>
using namespace std;

class student
{
    protected:
    int id;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter Id : ";
        cin>>ws>>id;
        cout<<"Enter Name : ";
        getline(cin>>ws,name);
    }
    void display()
    {
        cout<<"\n===== STUDENT DETAILS =====\n";
        cout<<"ID : "<<id<<endl;
        cout<<"NAME : "<<name<<endl;
   }
};

class marks : public student
{
    protected:
    int s1;
    int s2;
    int s3;
    public:
    void getdata()
    {
        student  :: getdata();
        cout<<"Enter Mark of Subject - 1 : ";
        cin>>ws>>s1;
        cout<<"Enter Mark of Subject - 2 : ";
        cin>>ws>>s2;
        cout<<"Enter Mark of Subject - 3 : ";
        cin>>ws>>s3;
    }
    void display()
    {
        student :: display();
        {
            cout<<"\n===== MARKS =====\n";
            cout<<"SUBJECT - 1 : "<<s1<<endl;
            cout<<"SUBJECT - 2 : "<<s2<<endl;
            cout<<"SUBJECT - 3 : "<<s3<<endl;
        }
    }
};

class result : public marks
{
    float omark = 0;
    float avg;
    float total = 108;
    float per;
    public:
    void calculate()
    {
        omark = s1 + s2 + s3;
        avg = omark / 3;
        per = (omark / total) * 100;
    }
    void display()
    {
        marks :: display();
        cout<<"\n===== RESULT =====\n";
        cout<<"OBTAINED MARKS : "<<omark<<endl;
        cout<<"TOTAL MARKS : "<<total<<endl;
        cout<<"AVERAGE : "<<avg<<endl;
        cout<<"PERCENTAGE : "<<per<<endl;
        cout<<endl;
    }
};

int main()
{
    result r1;
    r1.getdata();
    r1.calculate();
    r1.display();
    return 0;
}