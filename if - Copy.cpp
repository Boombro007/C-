#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n > 0)
        cout<<"Positive"<<endl;
    else if(n == 0)
        cout<<"Zero"<<endl;
    else
        cout<<"Negavtive"<<endl;
    return 0;
}