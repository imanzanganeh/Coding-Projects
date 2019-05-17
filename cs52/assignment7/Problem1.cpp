//Iman Arfa-Zanganeh
//Assignment #7
//Problem #1
#include <iostream>

using namespace std;

class Shape
{
public:
  virtual double area();
};

//Class declaration and definition for Area of a diamond derived from base class Shape. Consider the diamond cut into 4 triangles each with a base and height
class Diamond : public Shape
{
public:
  double base;
  double height;

  Diamond(double base, double height)
  {
    this -> base = base;
    this -> height = height;
  }

  double getBase()
  {
    return base;
  }

  double getHeight()
  {
    return height;
  }

  void setBase(double newBase)
  {
    base = newBase;
  }

  void setHeight(double newHeight)
  {
    height = newHeight;
  }

  double area()
  {
    return 4 * base * height;
  }
};

class Oval : public Shape//Class declaration and definition for area of a oval derived from base class Shape. Consider the oval to be an ellipse with a major and minor axis
{
  double majorAxis;
  double minorAxis;
  double _area;

  Oval(double majorAxis, double minorAxis)
  {
    this -> majorAxis = majorAxis;
    this -> minorAxis = minorAxis;
  }

  void setArea()
  {
    _area = 3.14 * majorAxis * minorAxis;//Area of oval is considered to be thearea of an ellipse, which is defined to be pi * it's major axis * it's minor axis
  }

  double area()
  {
    return _area;
  }
}; 

class Pentagon : public Shape//Class declaration and definition for Area of Pentagon derived from base class Shape. Consider the pentagon cut into 5 triangleseach with a base and a height
{
  double base;
  double height;
  double _area;

  Pentagon(double base, double height)
  {
    this -> base = base;
    this -> height = height;
  }

  void setArea()
  {
    _area = 5 * base * height;//Area of pentagon is the total area of 5 triangles that are created when the pentagon is cut up
  }

  double area()
  {
    return _area;
  }
};

int main()
{
  int input;
  Shape* shapes[10];
  int counter = 0;

  cout << "Press 1 to create a Diamond, 2 to create an Oval, 3 to create a Pentagon, 4 to print out the shapes created, or 5 to quit: ";

  while (input != 5)
    {
      if (input == 1)
	{
	  cout << "Enter in base: ";
	  double realBase;
	  cin >> realBase;
       
	  cout << "Enter in height: ";
	  double realHeight;
	  cin >> realHeight;

	  shapes[counter] = new Diamond(realBase,realHeight);
	  counter++;
	}
     
      if (input == 2)
	{
	  cout << "Enter in Major Axis: ";
	  double realMajor;
	  cin >> realMajor;
	  
	  cout << "Enter in Minor Axis";
	  double realMinor;
	  cin >> realMinor;	 
	}

       if (input == 3)
	{
	  cout << "Enter in base: ";
	  double realBase;
	  cin >> realBase;
       
	  cout << "Enter in height: ";
	  double realHeight;
	  cin >> realHeight;
	}
       
       if(input == 4)
	 {
	   cout << "Area: ";
	   cout <<  shapes[0] -> area() << '\n';
	   break;
	 }
    }
  return 0;
}//main
