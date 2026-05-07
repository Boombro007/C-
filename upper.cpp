/*Write UDF (User Defined Function) to convert lowercase characters of given string to
uppercase and uppercase to lowercase.*/
#include<iostream>
#include<string>
using namespace std;
string upper(char *str1);
string lower(char *str1);
int main()
{
    char str[50];
    int choice;
    cout<<"---- MENU ----\n";
    cout<<"1 - Upper Whole Stirng\n2 - Lower Whole String\n";
    cout<<"Enter your Choice:";
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Enter a string:";
        cin>>str;
        cout<<"Upper : "<<upper(str)<<"\n";
    }
    else if(choice == 2)
    {
        cout<<"Enter a string:";
        cin>>str;
        cout<<"Lower : "<<lower(str)<<"\n";
    }
    return 0;
}

string upper(char *str1)
{
    for(int i =0;str1[i] != '\0';i++)
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            str1[i] -=32;
        }
    }
    return str1;
}

string lower(char *str1)
{
    for(int i =0;str1[i] != '\0';i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] +=32;
        }
    }
    return str1;
}