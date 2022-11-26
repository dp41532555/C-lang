#include <iostream>
using namespace std;


class Shape 
{  
 protected:
  float volume;
};


class Sphere : public Shape 
{
  
  protected:
  float radius;

 
 public:
 
  void get() {
    cout << "Enter Sphere's radius : ";
    cin >> radius;
  }

 
  double Volume() {

    volume = (4 * 22 * radius * radius * radius) / (3 * 7);


    return volume;
  }
};


class Cylinder : public Shape {
 protected:
  float radius, height;


 public:

  void get() {
    cout << "Enter Cylinder's radius : ";
    cin >> radius;

    cout << "Enter Cylinder's height : ";
    cin >> height;
  }

    double Volume() {
    
    volume = (22 * radius * radius * height) / 7;

    
    return volume;
  }
};

class Cube : public Shape {

 protected:
  float side;


 public:
  
  void get() {
    cout << "Enter Cube's side :";
    cin >> side;
  }

 
  double Volume() {
   
    volume = side * side * side;

   
    return volume;
  }
};


class Cuboid : public Shape {
  protected:
  float length, height, breadth;


 public:

  void get() {
    cout << "Enter Cuboid's length : ";
    cin >> length;

    cout << "Enter Cuboid's height : ";
    cin >> height;

    cout << "Enter Cuboid's breadth : ";
    cin >> breadth;
  }

  
  double Volume() {
    
    volume = length * breadth * height;

   
    return volume;
  }
};

int main() {
  
  Sphere S;

  
  float sphere;

 
  S.get();

 
  sphere = S.Volume();

  cout << "Volume of Sphere : " << sphere << endl;
  cout << endl;

  //------------------------------------------------------------------------------

  // create a object
  Cylinder Cy;

  // float type variable to store volume
  float cylinder;

  // calling get() function to input radius and height of cylinder
  Cy.get();

  // calling Volume() function to calculate volume of the cylinder
  cylinder = Cy.Volume();

  cout << "Volume of Cylinder :" << cylinder << endl;
  cout << endl;

  //-----------------------

  // create a object
  Cube Cu;

  // float type variable to store volume
  float cube;

  // calling get() function to input sides of cube
  Cu.get();

  // calling Volume() function to 
  // calculate volume of the cube
  cube = Cu.Volume();

  cout << "Volume of Cube : " << cube << endl;
  cout << endl;

  //----------------------------

  // create a object
  Cuboid C;

  // float type variable to store volume
  float cuboid;

  // calling get() function to input length,
  // breadth and height of cuboid
  C.get();

  // calling Volume() function to 
  // calculate volume of the cuboid
  cuboid = C.Volume();

  cout << "Volume of Cuboid : " << cuboid << endl;
  cout << endl;

  return 0;
}