#include<iostream>
#include<string>
using namespace std;
int inadd(int a,int b)
{
    return a + b;
}
float fladd(float a1,float b2)
{
    return a1 + b2;
} 
// string stradd(string str1,string str2)
// {
//     return ;
// }
int main()
{
    int a,b;
    float a1,b2;
    string str1,str2;
    cout<<"Enter Two integers to add:";
    cin>>a>>b;
    cout<<"Enter two float to add:";
    cin>>a1>>b2;
    cout<<"Enter Two strings to add:";
    cin>>str1>>str2;
    cout<<"Integer : "<<inadd(a,b)<<endl;
    cout<<"Float : "<<fladd(a1,b2)<<endl;
    //cout<<"String : "<<string(str1,str2)<<endl;
    return 0;
}