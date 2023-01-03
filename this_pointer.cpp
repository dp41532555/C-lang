#include<iostream>
using namespace std;
class box
{
  int l,b;
  public:
  void setdata(int l,int b)
  {
    this->l=l;
    this->b=b;
  }
  void getdata()
{
    cout<<"area of box is "<<l*b;
}
};
int main()
{
    box a;
    a.setdata(3,5);
    a.getdata();
}

