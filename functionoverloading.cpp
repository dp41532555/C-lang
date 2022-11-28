#include<iostream>
using namespace std;
class calc
{
    int t;
    public:
    void total(int a,int b)
    {
        t = a + b;
        cout<<"addition of a and b is: "<<t<<endl;
    }
    void total(double a,double b)
    {
        double(t) = a * b;
        cout<<"multipication of a and b is : "<<t<<endl;
    }
    void total(int x,int y ,int z)
    {
        t = x + y + z;
        cout<<"addition of x ,y and z is: "<<t<<endl;
    }
};
int main()
{
    calc a;
    a.total(1,2);
    a.total(1,2,3);
    a.total(4.0,5.0);

}