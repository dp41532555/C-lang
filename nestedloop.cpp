#include<iostream>
using namespace std;
int main()
{
    int i,j,n,sp=10;
    cout<<"enter number : ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=sp;j>=1;j--)
        
            cout<<" ";
        
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        sp++;
        cout<<"\n";
        
    }
}