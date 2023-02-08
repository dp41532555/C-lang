#include<iostream>
using namespace std;
class base
{
    public:
    int n;
    base()
    {
        cout<<"enter number: ";
        cin>>n;
    }
};
class Derived : public base
{
    public:
    int i;
    Derived()
    {
        for(i=1;i<n;i++)
        {
            cout<<"square of "<<i<<" is : "<<i*i<<endl;
        }
        // cout<<"derived constructor is called"<<endl;
    }
};
class Derived2: public base
{
    public:
    int i;
    Derived2()
    {
        for(i=1;i<n;i++)
        {
            cout<<"Cube of "<<i<<" is : "<<i*i*i<<endl;
        }
    }
};
int main()
{
    Derived a;
    Derived2 b;
}


