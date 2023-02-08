#include<iostream>
using namespace std;
class base
{
    public:
    int n;
    base()
    {
        cout<<"enter number : "<<endl;
        cin>>n;
    }
};
class derived:public base
{
    public:
    int i;
};
class abc:public derived
{
    public:
     int cube()
    {
        for(i=0;i<n;i++)
        {
            cout<<"cube"<<i<<":-"<<i*i*i<<endl;
        }
    }
    int square()
    {
        for(i=0;i<n;i++)
        {
            cout<<"square"<<i<<":-"<<i*i<<endl;
        }
    }
    
};
int main()
{
    abc a;
    a.cube();
    cout<<"======================================"<<endl;
    a.square();
}
