#include <iostream>
using namespace std;
class base
{
public:
    int a[5], s, m, e;

public:
    void setdata(int sci, int math, int eng)
    {
        s = sci;
        m = math;
        e = eng;
    }
};
class Derived : public base//public base2
{
public:
    
    void getsub()
    {
        cout<<"maths marks: "<<s<< endl; 
        cout<<"sci marks : "<<m<< endl; 
        cout<<"eng marks : "<<e<< endl ;
    }
    void setsub()
    {
        cout<<"enter maths marks : ";
        cin>>s;
        cout<<"enter sci marks : ";
        cin>>m;
        cout<<"enter eng marks : ";
        cin>>e;
    }
    void getdata()
    {
        cout << "total is : " << s + m + e;
    }

};
/*class base2
{ 
    int x,y,z;
    void getdata()
    { 
        //x=s;
       // y=m;
        //z=e;
        cout << "total is : " << x+y+z;
    }
};*/
int main()
{
    Derived a;
    a.setsub();
    a.getsub();
    //a.setdata();
    a.getdata();
}