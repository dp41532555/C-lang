#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base constructor is called... "<<endl;

    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"derived 1 constructor is called..."<<endl;
    }
};
class derived2:public base
{
    public:
    derived2()
    {
        cout<<"derived 2 constructor is called ...."<<endl;
    }
};
class abc:public derived,public derived2
{
    public:
    abc()
    {
        cout<<"abc constructor is called...."<<endl;
    }
};
int main()
{
    abc a;
}