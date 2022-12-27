#include <iostream>
using namespace std;
class base
{

public:
    int n;
    base()
    {
        cout << "enter num :  " << endl;
        cin >> n;
    }
};
class base1
{
public:
    int i;
};

class derived : public base, public base1
{

public:
    cube()
    {
        for (i = 0; i < n; i++)
        {
            cout << "cube " << i << ":-" << i * i * i << endl;
        }
    }
    square()
    {
        for (i = 0; i < n; i++)
        {
            cout << "square" << i << ":-" << i * i << endl;
        }
    }
};

int main()
{
    derived a;
    a.cube();
    cout << "=========================================================" << endl;
    a.square();
}