#include<iostream>
using namespace std;

class car
{
    private:
    int n;

    public:
    void setTyre(int x)
    {
        n=x;
    }
    int getTyre()
    {
        return n;
    }

};

int main()
{
    car a;
    a.setTyre(15);
    cout<<"total number of tyre is : "<<a.getTyre();
}