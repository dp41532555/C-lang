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
    friend int maxnum(largest t);
};
int maxnum(largest t)
{
    if(t.a>t.b)
        return t.a;
    else
        return t.b;
}
int main()
{
    largest a;
    a.setdata();
    int x=maxnum(a);
    cout<<"largest no is "<<x;
    return 0;
}
