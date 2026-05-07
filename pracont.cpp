#include<iostream>
using namespace std;
class student
{
    int id;
    public:
    student()
    {}
    student(int r)
    {
        id = r;
        cout<<"ID : "<<id<<endl;
    }
};
int main()
{
    student s1(89),s2(93),s3;
    return 0;
}