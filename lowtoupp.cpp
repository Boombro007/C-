#include<iostream>
using namespace std;

int main()
{
    char s1[30];
    cout<<"Enter a string : ";
    cin>>s1;
    int ch;
    cout<<"For upper - 1 and lower - 2 :";
    cin>>ch;
    if(ch == 1)
    {
        for(int i=0;s1[i] != '\0';i++)
        {
            if(s1[i] >= 'a' && s1[i] <= 'z')
            {
                s1[i] -= 32;
            }
        }
        cout<<"UPPER : "<<s1<<endl;
    }
    else if(ch == 2)
    {
        for(int i=0;s1[i] != '\0';i++)
        {
            if(s1[i] >= 'A' && s1[i] <= 'Z')
            {
                s1[i] += 32;
            }
        }
        cout<<"LOWER : "<<s1<<endl;
    }
    else
    {
        cout<<"INVALID OPTION\n";
    }
    return 0;
}