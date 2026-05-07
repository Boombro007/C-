#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
    int id;
    string name;
    public:
    student(int s)
    {
        student *s1 = new student[s];
        for(int i=0;i<s;i++)
        {
            cout<<"Enter Id - "<<i+1<<" : ";
            cin>>id;
            cout<<"Enter Name - "<<i+1<<" : ";
            getline(cin,name);
        }
    }
    void display()
    {
        
    }
    ~student()
    {
        delete [] s1;
    }
};