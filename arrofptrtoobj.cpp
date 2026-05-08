#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    private:
    int id;
    string name;
    public:
    float cgpa;
    void input()
    {
        cout<<"Enter ID : ";
        cin>>ws>>id;
        cout<<"Enter NAME : ";
        getline(cin>>ws,name);
        cout<<"Enter CGPA : ";
        cin>>ws>>cgpa;
    }
    void output()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"CGPA : "<<fixed<<setprecision(2)<<cgpa<<endl;
    }
};

int main()
{
    student *p[3];
    for(int i=0;i<3;i++)
    {
        p[i] = new student;
        p[i]->input();
    }
    for(int i=0;i<3;i++)
    {
        p[i]->output();
    }
    cout<<"\n---- AFTER SORTING ----\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((p[i]->cgpa) > (p[j]->cgpa))
            {
                student temp = *p[i];
                *p[i] = *p[j];
                *p[j] = temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        p[i]->output();
    }
    return 0;
}