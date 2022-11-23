#include<iostream>
using namespace std;
class base1
{
    protected :
    char name[20];
    int rol_num;
    public:
    void setinfo()
    {
        cout<<"student name is: ";
        cin>>name;
        cout<<"student rol_num is: ";
        cin>>rol_num;
    }
    void getinfo()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"rol_num is : "<<rol_num<<endl; 
    }
};
class base2
{
   
    protected:
    
    int maths, sci, eng,total,per;
    public:
    
    
    void getsub()
    {
        cout<<"maths marks: "<<maths<< endl; ;
        cout<<"sci marks : "<<sci<< endl; ;
        cout<<"eng marks : "<<eng<< endl ;
    }
    void setsub()
    {
        cout<<"enter maths marks : ";
        cin>>maths;
        cout<<"enter sci marks : ";
        cin>>sci;
        cout<<"enter eng marks : ";
        cin>>eng;
    }
    
};
class derived : public base1,public base2
{
    int total;
    public:
    void setderived()
    {
        total = maths+sci+eng;
    }
    void getderived()
    {
        cout<<"total is : "<<total<<endl;
    }
};
int main()
{
    derived f;
    f.setinfo();
    f.setsub();
    f.getinfo();
    f.getsub();
    f.setderived();
    f.getderived();
}
    
