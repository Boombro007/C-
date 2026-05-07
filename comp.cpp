#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter string - 1 : ";
    cin>>s1;
    cout<<"Enter string - 2 : ";
    cin>>s2;
    int x = s1.compare(s2);
    cout<<"\n==== COMPARISION ====\n";
    if (x == 0)
    {
        cout<<"s1 = s2\n";
    }
    if(x != 0)
    {
        cout<<"s1 != s2\n";
    }
    cout<<"\n===== SWAP =====\n";
    cout<<"Before : s1 = "<<s1<<" , s2 = "<<s2<<endl;
    s1.swap(s2);
    cout<<"After : s1 = "<<s1<<" , s2 = "<<s2<<endl;
    return 0;
}