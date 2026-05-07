#include<iostream>
using namespace std;
int main()
{
    bool p  = true;
    bool const *p1 = &p;
    p1++;
    *p1 = false;
    return 0;
}