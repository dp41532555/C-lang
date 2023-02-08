#include<iostream>
using namespace std;
class test
{
    public:
      static int count;
      test()
      {
            cout<<"count constructor is called.."<<endl;
            counter();
      }
      static int counter()
      {
        count++;
      }
};
int test::count=0;
int main()
{
    test a;
    cout<<"total count is : "<<test::counter();
    return 0;
} 