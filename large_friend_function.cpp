<<<<<<< HEAD
#include<iostream>
=======
#include <iostream>
>>>>>>> 3147dc282d9d2bb316b22099c23f0adf3b6c1fff
using namespace std;
class largest
{
    int a,b;
    public:
    void setdata()
    {
        cout<<"enter a: ";
        cin>>a;
        cout<<"enter b: ";
        cin>>b;
    }
    friend int maxnum(largest l);
<<<<<<< HEAD

=======
>>>>>>> 3147dc282d9d2bb316b22099c23f0adf3b6c1fff
};
int maxnum(largest l)
{
    if(l.a>l.b)
<<<<<<< HEAD
    {
        return l.a;
    }
=======
        return l.a;
>>>>>>> 3147dc282d9d2bb316b22099c23f0adf3b6c1fff
    else
        return l.b;
}
int main()
{
    largest a;
    a.setdata();
    int x=maxnum(a);
<<<<<<< HEAD
    cout<<"largest no is : "<<x;
    return 0;
}
=======
    cout<<"largest no is "<<x;
    return 0;
}
>>>>>>> 3147dc282d9d2bb316b22099c23f0adf3b6c1fff
