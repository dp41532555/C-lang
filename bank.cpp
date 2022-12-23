#include<iostream>
using namespace std;
class saving:
{
    public:
    int x, y;
    int bal = 0;
    void sdeposite()
    {
        cout << "enter deposite money : " << endl;
        cin >> x;
        bal = bal + x;
        cout << "your deposit money: " << x << endl;
    }
    void swithdraw()
    {
        cout << "enter your withdraw money : " << endl;
        cin >> y;
        if (bal < y)
        {
            cout << "not enough money" << endl;
        }
        else
        {
            bal = bal - y;
            cout << "your withdraw money is : " << y << endl;
        }
    }
    void sshowbalance()
    {
        cout << "your balance is " << bal << endl;
    }
};