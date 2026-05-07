#include <iostream>
using namespace std;
class Base {
protected:
int x;
public:
void f1(){ cout << "f1() in Base\n"; }
void f1(int i)
{
 x=i;
}
void display() { cout<<x; }
};
class Derived: public Base {
int x=10;
public:
void f1(){ cout << "f1() in derived\n"; }
void display() { cout<<x; }
};
int main(){
 Derived d;
 d.f1();
 d.Base :: f1(5);
 d.display();
 return 0; 
}