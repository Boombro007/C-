#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class dyna
{
    char *name;
    int length;
    string s1;

    public:
    dyna()
    {
        length = 0;
        name = new char [length + 1];
    }
    dyna(char *s)
    {
        length = strlen(s);
        name = new char [length+1];

        strcpy(name,s);
    }
    ~dyna()
    {
        delete [] name;
    }
    void display()
    {
        cout<<name<<endl;
    }
};

int main()
{
    dyna name1("bhavya");
    name1.display();
    return 0;
}