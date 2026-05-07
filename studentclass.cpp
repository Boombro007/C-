/*Create a class named student with data as roll no, name, cpi, etc.
a. Create functions to display the relevant data of student class.
b. Also write a function that can change/alter data of student class.*/
#include<iostream>
using namespace std;

class student
{
    int id;
    char name[50];
    float cpi;
    char department[50];
    public:
        void getdata();
        void display();
        void edit();
};

void student :: getdata()
{
    cout<<"----- ENTER DETAILS -----\n";
    cout<<"Enter id:";
    cin>>id;
    getchar();
    cout<<"Enter name:";
    cin.getline(name,50);
    cout<<"Enter cpi:";
    cin>>cpi;
    getchar();
    cout<<"Enter department:";
    cin.getline(department,50);
}

void student :: display()
{
    cout<<"\n----- DISPLAY -----\n";
    cout<<"ID : "<<id<<endl;
    cout<<"NAME : "<<name<<endl;
    cout<<"CPI : "<<cpi<<endl;
    cout<<"DEPARTMENT : "<<department<<endl;
}

void student :: edit()
{
    int choice;
    cout<<"MENU:\n1 - Name\n2 - Id\n3 - Cpi\n4 - Department\n";
    cout<<"Enter your choice:";
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Enter Name:";
        cin.getline(name,50);
    }
    if(choice == 2)
    {
        cout<<"Enter Id:";
        cin>>id;
    }
    if(choice == 3)
    {
        cout<<"Enter Cpi:";
        cin>>cpi;
    }
    if(choice == 4)
    {
        cout<<"Enter Department:";
        cin.getline(department,50);
    }
}

int main()
{
    class student s1;
    s1.getdata();
    s1.display();
    int ch;
    cout<<"Enter Your choice if you want to edit:";
    cout<<"1 - Yes\n2 - No\n";
    cin>>ch;
    if(ch == 1)
    {
        s1.edit();
        s1.display();
    }
    else
    {
        exit(1);
    }
    return 0;
}