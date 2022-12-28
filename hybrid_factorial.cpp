#include<iostream>
using namespace std;
class base
{
    public:
    int n;
};
class derived:public base
{
    public:
    int f;
};
class abc:public derived
{
   public:
   int fact(int n)
   {
    if(n==1)
    return 1;
    else
     return n*fact(n-1);
   }  
};
int main()
{
    abc a;
    cout<<"factorial is "<<a.fact(5);
}