#include<iostream>
using namespace std;
class student 
{
    private:
      int admno;
      char sname[20];
      float eng,math,sci,total;
    public:
      void takedata()
      {
        cout<<"enter no : ";
        cin>>admno;
        cout<<"enter name : ";
        cin>>sname;
        cout<<"enter english marks : ";
        cin>>eng;
        cout<<"enter math marks : ";
        cin>>math;
        cout<<"enter science marks : ";
        cin>>sci;
      }
      void ctotal()
      {
            total=eng+math+sci;
      }
      void showdata()
      {
        cout<<"no is  : "<<admno<<endl;
        cout<<"name is  : "<<sname<<endl;
        cout<<"eng : "<<eng<<endl;
        cout<<"math : "<<math<<endl;
        cout<<"sci : "<<sci<<endl;

        cout<<"total is  : "<<total<<endl;
      }


};
int main()
{
    class student(a);
    a.takedata();
    a.ctotal();
    a.showdata();

}