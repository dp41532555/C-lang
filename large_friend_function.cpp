#include<iostream>
using namespace std;
class largest
{
    int a,b;
    public:
    void setdata()
    {
        cout<<"enter a: ";
        cin>>a;
        cout<<"enter b: ";
        cin>>b;
    }
    friend int maxnum(largest l);

};
int maxnum(largest l)
{
    if(l.a>l.b)
    {
        return l.a;
    }
    else
        return l.b;
}
int main()
{
    largest a;
    a.setdata();
    int x=maxnum(a);
    cout<<"largest no is : "<<x;
    return 0;
}