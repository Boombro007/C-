#include<iostream>
using namespace std;

class weight
{
    private:
    int kg,g;
    public:
    void getdata()
    {
        cout<<"Enter Kilograms : ";
        cin>>kg;
        cout<<"Enter Grams : ";
        cin>>g;
    }
    void display()
    {
        cout<<kg<<" Kilograms and "<<g<<" Grams\n";
    }
    weight sum(weight *w1,weight *w2)
    {
        weight w3;
        w3.g = w1->g + w2->g;
        w3.kg = w3.g / 1000;
        w3.g = w3.g % 1000;
        w3.kg = w1->kg+ w2->kg+w3.kg;
        return w3;
    }
};

int main()
{
    weight W1,W2,W3;
    cout<<"Enter data of object - 1\n";
    W1.getdata();
    cout<<"Enter data of object - 2\n";
    W2.getdata();
    W1.display();
    W2.display();
    W3 = W3.sum(&W1,&W2);
    W3.display();
    return 0;
}