/*
    desturctor -> same as constructor
*/
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
    ~hello()  //default Destructor
    {
        cout<<"default Destuctor is called..."<<endl;
    }
};
int main()
{
    hello a,b(1000);
    return 0;
}