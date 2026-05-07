#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int *p = new int[n];
    cout<<"Enter "<<n<<" Elements : \n";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(p[i] < p[j])
            {      
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
       }
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}