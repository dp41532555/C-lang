#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    void setdata(int len,int bre,int hei)
    {
        l=len;
        b=bre;
        h=hei;
    }
    int getdata()
    {
        return l*b*h;
    }
    box operator+(box &t)
    {
        box x;
        x.l = l + t.l;
        x.b = b + t.b;
        x.h = h + t.h;
        return x;
    }
    box operator-(box &u)
    {
        box y;
        y.l = l - u.l;
        y.b = b - u.b;
        y.h = h - u.h;
        return y;

    }

};
int main()
{
    box a,b;
    int vol;
    a.setdata(2,3,4);
    b.setdata(5,6,7);

    vol= a.getdata();
    cout<<"volume of a box is : "<<vol<<endl;
    vol= b.getdata();
    cout<<"volume of b box is : "<<vol<<endl;
    box c;
    c=a+b;
    vol=c.getdata();
    cout<<"volume of c box is : "<<vol<<endl;
    
    box d;
    d=a-b;
    vol=d.getdata();
    cout<<"volume of d box is : "<<vol<<endl;
    return 0;
}