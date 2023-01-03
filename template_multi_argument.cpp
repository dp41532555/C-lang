#include<iostream>
using namespace std;
template<class x,class y>
void display(x a,y b)
{
    cout<<"displaying template :  "<<a<<"\t"<<b<<endl;
}
int main()
{
    display('d',1.25);
    display('x',43);
    display(25,1.23);
    return 0;

}