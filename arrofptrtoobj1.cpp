#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    public:
    virtual void input()//declared bcz it wont call input of student or professor
    {
        cout<<"Enter name : ";
        getline(cin>>ws,name);
    }
    void output()
    {
        cout<<"NAME : "<<name<<endl;
    }
    virtual bool isoutstanding() = 0;
};

class student : public person
{
    float cgpa;
    public:
    void input()
    {
        person :: input();
        cout<<"Enter CGPA : ";
        cin>>ws>>cgpa;
    }
    void output()
    {
        cout<<"NAME : "<<name<<endl;
        cout<<"CGPA : "<<cgpa<<endl;
    }
    bool isoutstanding()
    {
        return cgpa > 9.0;
    }
};

class professor : public person
{
    int repaper;
    public:
    void input()
    {
        person :: input();
        cout<<"Enter reseach paper : ";
        cin>>ws>>repaper;
    }
    void output()
    {
        cout<<"NAME : "<<name<<endl;
        cout<<"Reseach Papers : "<<repaper<<endl;
    }
    bool isoutstanding()
    {
        return repaper > 3 ;
    }
};

int main()
{
    person *p[5];
    char ch;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter S - for student or P - for professor : ";
        cin>>ch;
        if(ch == 'S' || ch == 's')
        {
            p[i] = new student;
            p[i]->input();
        }
        else
        {
            p[i] = new professor;
            p[i]->input();
        }
    }
    cout<<"Outstanding Person : \n";
    for(int i=0;i<5;i++)
    {
        if(p[i]->isoutstanding())
        {
            p[i]->output();
        }
    }
    return 0;
}