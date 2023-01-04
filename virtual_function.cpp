#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"base class display called.. "<<endl;
    }
};

class derived:public base
{
     public:
     void display()
     {
        cout<<"derived class display is called..."<<endl;
     }
};
int main()
{
    base *p,z;
    derived a;
    
    p=&a;
    p->display();
    p=&z;
    p->display();
}