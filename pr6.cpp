#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("man"),s2,s3;
    s2.assign(s1);
    s3 = "si";
    string s4("wo"+s1);
    s2 += "age";
    s3.append("ager");
    s1[0] = 'v';
    cout<<"s1 : "<<s1<<"\ns2 : "<<s2<<"\ns3 : "<<s3<<"\ns4 : "<<s4<<endl;
    return 0;
}