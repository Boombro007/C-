/*
Create class ‘Employee’ with data members ‘Emp_id’, ’Name’ and ‘Salary’.
Define member functions for input and output operations. Write a main()
function which creates a dynamic array of Employees using new operator
and displays the details of employee with highest salary.
*/
#include<iostream>
#include<string>
using namespace std;

class employee
{
    private :
    int Emp_id;
    string name;
    double Salary;
    public:
        int size;
        void getdata();
        void display();
        double getsalary();
};

void employee :: getdata()
{
    cout<<"Enter Emplyee Id : ";
    cin>>Emp_id;
    cout<<"Enter Employee Name : ";
    getline(cin>>ws,name);
    cout<<"Enter Employee Salary : ";
    cin>>Salary;
}

void employee :: display()
{
    cout<<"Employee Id : "<<Emp_id<<endl;
    cout<<"Employee Name : "<<name<<endl;
    cout<<"Employee Salary : "<<Salary<<endl;
}

double employee :: getsalary()
{
    return Salary;
}

int main()
{
    int size;
    cout<<"Enter Number of Employee : ";
    cin>>size;
    employee *e = new employee[size];
    for(int i=0;i<size;i++)
    {
        cout<<"EMPLOYEE - "<<i+1<<" : "<<endl;
        e[i].getdata();
    }
    int maxindx = 0;
    for(int i=1;i<size;i++)
    {
        if(e[i].getsalary() > e[maxindx].getsalary())
        {
            maxindx = i;
        }
    }
    cout<<"\n==== HIGHEST SALARAY ====\n";
    e[maxindx].display();
    delete [] e;
    return 0;   
}