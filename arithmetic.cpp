#include<iostream>
using namespace std;
class base1
{
    public:
    int number1,number2;
    void setinfo()
    {
        cout<<"enter number1 : ";
        cin>>number1;
        cout<<"enter number2 : ";
        cin>>number2;
    }
    
    int n;
    void multipication()
    {
       n =number1*number2;
       cout<<"multipication is : "<<n;
    }
    void division()
    {
        n=number1/number2;
        cout<<"\ndivision is : "<<n;

    }
};
int main()
{
    base1 a;
    a.setinfo();
    a.multipication();
    a.division();
    
}


    
    
