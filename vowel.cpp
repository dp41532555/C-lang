
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter ch : ";
    cin>>ch;
    cout<<"your ch is : "<<int(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"\nch is vowel "<<ch;
    }
    else
    {
        cout<<"\nch is consonant"<<ch;
    }
}