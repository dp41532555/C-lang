// friend function binary operator overloading
#include <iostream>
using namespace std;
class box
{
    int l, b;
    friend box operator*(box , box);

public:
    void setdata(int, int); // declare
    int getdata();
};
void box ::setdata(int len, int wid) // using scope resolution
{
    l = len, b = wid;
}
int box::getdata()
{
    return l * b;
}
box operator*(box x, box y)
{
    box z;
    z.l = x.l * y.l;
    z.b = x.b * y.b;
    return z;
}
int main()
{
    box a, b, c;
    int area;
    a.setdata(2, 2);
    b.setdata(3, 3);

    area = a.getdata();
    cout << "area of box a is: " << area << endl;
    area = b.getdata();
    cout << "area of box b is: " << area << endl;

    c = a * b;
    area = c.getdata();
    cout << "area of box c is : " << area << endl;
    return 0;
}