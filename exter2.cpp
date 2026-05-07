#include <iostream>
using namespace std;
class test
{
 int a;
 public:
 test(){ cout<<"IT\n"; }
 ~test(){ cout<<"CE\n";}
 test(test &d){ cout<<"EC\n"; }
 void abc(test);
};
void test::abc(test s)
{
 test v;
 cout<<"FOT\n";
}
int main()
{
 test t;
 t.abc(t);
 cout<<"DDU\n";
 return 0;
}