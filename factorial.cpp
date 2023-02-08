#include <iostream>
using namespace std;
class base
{
public:
    int n;
};
class base1
{
public:
    int f;
};
class derived : public base, public base1
{
public:
    if (f == 1)
    {
        return 1;
        else return f * fact(f - 1);
    }
};
int main()
{
    derived a;
    cout << "factorial is  : " << a.fact(5);
}