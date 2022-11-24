#include<iostream>
using namespace std;
class hello
{
    public:
    hello()  //default constructor
    {
        cout<<"default constructor is called..."<<endl;
    }
        hello(int x) //parameterized constructor
    {
        cout<<"parametereized constructor is called...x :"<<x<<endl;
    }
        hello(int x,int y) //parametereized constructor
    {
        cout<<"parametereized constructor is called..."<<x+y<<endl;
    }
        hello(char p)  //overloding constructor
    {
        cout<<"default constructor is called..."<<p<<endl;
    }
};
int main()
{
    hello a,b(1000),c('A'),d(10,20);
    return 0;
}