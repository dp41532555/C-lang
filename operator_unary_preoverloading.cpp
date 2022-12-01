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
    box operator++()
    {
        box x;
        x.l = ++l;
        x.b = ++b;
        x.h = ++h;
    }
};
int main()
{
    box a;
    int vol;
    a.setdata(2,3,4);
    vol=a.getdata();
    cout<<"volume of a box is : "<<vol<<endl;

    ++a;
    vol=a.getdata();
    cout<<"after increment volume of a box is : "<<vol<<endl;
    return 0;
}    