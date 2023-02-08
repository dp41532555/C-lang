#include <iostream>
using namespace std;
class bank
{
public:
    bank()
    {
        cout << "=================================" << endl;
        cout << "welcome in bank" << endl;
        cout << "=================================" << endl;
    }
    ~bank()
    {
        cout << "=================================" << endl;
        cout << "thank you" << endl;
        cout << "=================================" << endl;
    }
};
class saving : public bank
{
    int x, y;
    int bal = 0;

public:
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
class current : public bank
{
    int x, y;
    int bal = 0;

public:
    void cdeposite()
    {
        cout << "enter deposite money : " << endl;
        cin >> x;
        bal = bal + x;
        cout << "your deposit money: " << x << endl;
    }
    void cwithdraw()
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
    void cshowbalance()
    {
        cout << "your balance is " << bal << endl;
    }
};
class abc : public saving, public current
{
    int ac_no;
    char name[50];

public:
    void setacc()
    {
        cout << "enter account number : ";
        cin >> ac_no;
        cout << "enter account holder name:  ";
        cin >> name;
    }
    void getacc()
    {
        cout << "your account number is : " << ac_no << endl;
        cout << "your account holder name is : " << name << endl;
    }
};
int main()
{
    abc a;
    int ch, A;

    a.setacc();
    a.getacc();

    while (A != 0)
    {
        cout<<"======================================================="<<endl;
        cout << "1.saving account " << endl;
        cout << "2.current account " << endl;
        cout << "0.exit " << endl;
        cout << "enter your choice " << endl;

        cin >> A;
        switch (A)
        {
        case 1:
            cout << "-------------saving account-------------" << endl;
            break;
        case 2:
            cout << "-------------current account---------------" << endl;
            break;
        case 0:
            break;
        }
        ch = 1;
        while (ch != 0)
        {
            cout<<"========================================================="<<endl;
            cout << "1.deposit ammount : " << endl;
            cout << "2.withdraw ammount : " << endl;
            cout << "3.show ammount : " << endl;
            cout << "0.exit : " << endl;
            cout << "enter your choice : " << endl;
            cin >> ch;

            switch (ch)
            {
            case 1:
                if (A == 1)
                {
                    a.sdeposite();
                }
                else
                {
                    a.cdeposite();
                }
                break;
            case 2:
                if (A == 1)
                {
                    a.swithdraw();
                }
                else
                {
                    a.cwithdraw();
                }
                break;
            case 3:
                if (A == 1)
                {
                    a.sshowbalance();
                }
                else
                {
                    a.cshowbalance();
                }
                break;
            case 0:
                break;
            default:
                cout << "your choice enter is invalid" << endl;
            }
        }
    }
}