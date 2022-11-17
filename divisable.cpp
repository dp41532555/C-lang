#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number : ";
    cin>>a;
    if(a%5==0||a%3==0)
    {
        cout<<"\n number is divisable";
    }
    else
    {
        cout<<"\n number is not divisable ";
    }
}
