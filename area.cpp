#include <iostream>
using namespace std;


class Shape {
 
 protected:
  float area;
};


class Rectangle : public Shape {
 protected:
  float length, breadth;


 public:

  void get() {
    cout << "\nEnter Rectangle's Length :";
    cin >> length;

    cout << "Enter Rectangle's Breadth :";
    cin >> breadth;
  }


  double Area() {

    area = length * breadth;


    return area;
  }
};


class Circle : public Shape {

 protected:
  float radius;

 public:

  void get() {
    cout << "Enter Circle's Radius :";
    cin >> radius;
  }


  double Area() {
    area = (22 * (radius * radius)) / 7;

      return area;
  }
};

class Square : public Shape {

 protected:
  float side;

 public:

  void get() {
    cout << "\nEnter Square's Side : ";
    cin >> side;
  }


  double Area() {

    area = side * side;


    return area;
  }
};

int main() {

  Circle C;


  float circle;


  C.get();


  circle = C.Area();

  cout << "Area of Circle : " << circle << endl;

  Rectangle R;


  float rectangle;


  R.get();


  rectangle = R.Area();

  cout << "Area of Rectangle : " << rectangle << endl;


  Square S;

  
  float square;

  
  S.get();

  
  square = S.Area();

  cout << "Area of Square : " << square << endl;

  return 0;
}