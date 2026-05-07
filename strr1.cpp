/*
Use std::string class to represent the following strings:
s1= “every cloud”
s2= “silver lining”
s3= “has”
Write a single c++ program to perform following operations:
• using string variables s1 and s2, formulate string r1 as “every cloud
silver lining”
• using string variables r1 and s3, modify string r1 as “every cloud has
silver lining”
• replace first word of r1 with “each”
• count total number of spaces in r1
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("every cloud");
    string s2(" silver lining");
    string s3(" has ");
    string r1;
    r1 = s1 + s2;
    cout<<"r1 : "<<r1<<endl;
    r1.insert(12,s3);
    cout<<"modified r1 : "<<r1<<endl;
    int spa = 0;
    for(int i=0;r1[i] != '\0';i++)
    {
        if(r1[i] == ' ')
        {
            spa++;
        }
    }
    cout<<"Space in r1 : "<<spa<<endl;
    return 0;
}