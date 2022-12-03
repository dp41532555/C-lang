#include <iostream>
using namespace std;
class box
{
private:
    int l, b;

public:
    void setdata(int x, int y)
    {
        l = x, b = y;
    }
    void getdata()
    {
        cout << "box area is : " << l*b << endl;
    }
    friend box operator++(box);
};
box operator++(box t)
{
    box z;
    z.l = ++t.l;
    z.b = ++t.b;
    return z;
}
int main()
{
    box a,b;
    a.setdata(2,3);
    a.getdata();

    b = ++a;
    cout<<"after increment: "<<endl;
    b.getdata();
    return 0;
}