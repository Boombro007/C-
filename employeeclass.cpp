/*Define a class Employee with data employee name, city, basic salary, dearness
allowance (DA) and house rent (HRA).
a. Define getdata (), calculate (), and display () functions.
b. Calculate() function should find the total salary and display() function should
display it.
Hint: Total = basic + basic * da / 100 + basic * hra / 100;*/
#include<iostream>
using namespace std;

class employee
{
    char name[100];
    char city[100];
    double bsal;
    int da;
    int hra;
    int total;
    public:
        void getdata();
        void display();
        void calculate();
        void edit();
};

void employee :: getdata()
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter City:";
    cin>>city;
    cout<<"Enter Basic salaray:";
    cin>>bsal;
    cout<<"Enter dearness allowance:";
    cin>>da;
    cout<<"Enter House rent:";
    cin>>hra;
}

void employee :: calculate()
{
    total = bsal + bsal * da / 100 + bsal * hra / 100;
}

void employee :: display()
{
    cout<<"----- DISPLAY -----\n";
    cout<<"NAME : "<<name<<endl;
    cout<<"CITY : "<<city<<endl;
    cout<<"BASIC SALARY : "<<bsal<<endl;
    cout<<"DEARNESS ALLOWANCE : "<<da<<endl;
    cout<<"HOUSE RENT : "<<hra<<endl;
    cout<<"TOATL SALARY : "<<total<<endl;
}

void employee :: edit()
{
    int choice;
    cout<<"MENU:\n1 - Name\n2 - City\n3 - Basic slaray\n4 - Dearness allowance\n5 - House rent\n";
    cout<<"Enter your choice:";
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Enter Name:";
        cin>>name;
    }
    if(choice == 2)
    {
        cout<<"Enter City:";
        cin>>city;
    }
    if(choice == 3)
    {
        cout<<"Enter Basic salaray:";
        cin>>bsal;
    }
    if(choice == 4)
    {
        cout<<"Enter Dearness allowance:";
        cin>>da;
    }
    if(choice == 5)
    {
        cout<<"Enter House rent:";
        cin>>hra;
    }
}

int main()
{
    class employee e1;
    e1.getdata();
    e1.calculate();
    e1.display();
    int ch;
    cout<<"Enter if you want to edit:";
    cout<<"1 - yes\n2 - no\n";
    cin>>ch;
    if(ch == 1)
    {
        e1.edit();
        e1.calculate();
        e1.display();
    }
    return 0;
}