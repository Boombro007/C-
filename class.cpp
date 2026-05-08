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
    int size;
    cout<<"Enter Size : ";
    cin>>size;
    student *p = new student [size];
    for(int i=0;i<size;i++)
    {
        p[i].input();
    }
    for(int i=0;i<size;i++)
    {
        p[i].output();
    }
    cout<<"\n---- AFTER SORTING ----\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if((p[i].cgpa) > (p[j].cgpa))
            {
                student temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        p[i].output();
    }
    return 0;
}