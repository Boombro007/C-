#include<iostream>
using namespace std;
int main()
{
    char choice;
    int a,fact=1,cube;
    cout<<"---- MENU ----\n";
    cout<<"'F' - Factorial\n'C' - Cube\n";
    cout<<"Enter Your choice:";
    cin>>choice;
    //factorial
    if(choice == 'F' || choice == 'f')
    {
        cout<<"\n---- FACTORIAL ----\n";
        cout<<"Enter A number to find factorial:";
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            fact = fact * i;
        }
        cout<<"Factorial of "<<a<<" is "<<fact<<"\n";
    }
    //Cube
    if(choice == 'C' || choice == 'c')
    {
        cout<<"\n---- CUBE ----\n";
        cout<<"Enter A number to find cube:";
        cin>>a;
        cube = a * a * a;
        cout<<"Cube of "<<a<<" is "<<cube<<"\n";
    }
    return 0;
}