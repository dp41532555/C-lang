#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=1,c;
    cout<<"enter number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<"\t"<<c;
    }
}
