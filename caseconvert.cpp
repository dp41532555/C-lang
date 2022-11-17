#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter ch  : ";
    cin>>ch;
    cout<<"your ch is : "<<ch<< "-\t" <<int(ch);
    if(ch>=65&&ch<=90)
    {
        ch=ch+32;
        cout<<"\nchanging is : "<<ch<< "-\t" <<int(ch);
    }
    else
    {
        ch=ch-32;
        cout<<"\nchanging is : "<<ch<< "-\t"<<int(ch);
    }
}