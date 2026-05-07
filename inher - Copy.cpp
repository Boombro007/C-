#include<iostream>
#include<string>
using namespace std;

class Student
{
    protected:
    int id;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter Id : ";
        cin>>id;
        cout<<"Enter Name : ";
        getline(cin>>ws,name);
    }
    void display()
    {
        cout<<"===== RESULT =====\n";
        cout<<"ID : "<<id<<endl;
        cout<<"NAME : "<<name<<endl;
    }
};

class result : public Student
{
    float s1,s2,s3;
    float total = 108;
    float omarks;
    float per;
    public:
    void getdata()
    {
        Student :: getdata();
        cout<<"Enter marks of 3 subjects : ";
        cin>>ws>>s1>>s2>>s3;
    }
    void cal()
    {
        omarks = s1 + s2 + s3;
        per = (omarks / total) * 100;
    }
    void display()
    {
        Student :: display();
        cout<<"Subject - 1 : "<<s1<<endl;
        cout<<"Subject - 2 : "<<s2<<endl;    
        cout<<"Subject - 3 : "<<s3<<endl;
        cout<<"Obtained marks : "<<omarks<<endl;
        cout<<"Total Marks : "<<total<<endl;
        cout<<"Percentage : "<<per<<endl;
    }
};

int main()
{
    result R1;
    //R1.student :: getdata();
    R1.getdata();
    R1.cal();
    //R1.student :: display();
    R1.display();
    return 0;
}