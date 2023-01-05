#include<iostream>
using namespace std;
class findAge
{
    int age;
    public:
    findAge(int n)
    {
        age=n;
        cout<<"age : "<<age<<endl;
    }
    findAge(findAge &new_age)
    {
        age=new_age.age;
        cout<<"new age is : "<<age<<endl;
    }
};
int main()
{
    findAge a(20);
    findAge b(a);
    return 0;
    
}