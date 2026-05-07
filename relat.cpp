#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("12345");
    string s2("abcde");

    cout<<"\nAdd of two strings(or cascade)\n";
    string s3 = s1 + s2;
    cout<<"Cascadeing strings : "<<s3<<endl;//12345abcde

    cout<<"\nInsering string\n";
    s1.insert(2,s2);
    cout<<"Inserted string : "<<s1<<endl;//12abcde345

    cout<<"\nErased String\n";
    s1.erase(2,4);
    cout<<"Erased one : "<<s1<<endl;//12e345

    cout<<"\nReplaced String\n";
    s2.replace(1,2,s1);
    cout<<"Replaced one : "<<s2<<endl;//a12e345de

    s1 = "12345";
    s2 = "abcde";
    int a = s1.compare(s2);
    cout<<"\nComapred string : "<<a<<endl;
    return 0;
}