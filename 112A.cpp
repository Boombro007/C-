#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    char s1[100];
    char s2[100];
    cin>>s1;
    cin>>s2;
    int x = strlen(s1);
    int y = strlen(s2);
    if(x == y)
    {   
        int a1=0,a2=0;
        for(int i=0;s1[i]!='\0';i++)
        {
            a1 += tolower(s1[i]);
        }
        for(int i=0;s2[i]!='\0';i++)
        {
            a2 += tolower(s2[i]);
        }
        if(a1 > a2)
        {
            cout<<"1\n";
        }
        if(a1 < a2)
        {
            cout<<"-1\n";
        }
        if(a1 == a2)
        {
            cout<<"0\n";
        }
    }
    return 0;
}