#include<iostream>
using namespace std;
template<class t>
void display(t t1)
{
    cout<<"displaying template :  "<<t1<<endl;
}
int main()
{
    display(200);
    display(12.32);
    display('d');
}