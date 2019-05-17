//Iman Arfa-Zanganeh
//Assignment #7
//Problem #1
#include <iostream>

using namespace std;

class Shape
{
public:
  virtual double area() = 0;
};

//Class declaration and definition for Area of a diamond derived from base class Shape. Consider the diamond cut into 4 triangles each with a base and height
class Diamond : public Shape
{
private:
  double base;
  double height;

public:
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
    //Area of diamond is considered to be the !!!!!
    return (base * height) / 2;
  }
};

class Oval : public Shape//Class declaration and definition for area of a oval derived from base class Shape. Consider the oval to be an ellipse with a major and minor axis
{
private:
  double majorAxis;
  double minorAxis;

public:
  Oval(double majorAxis, double minorAxis)
  {
    this -> majorAxis = majorAxis;
    this -> minorAxis = minorAxis;
  }

  double getMajorAxis()
  {
    return majorAxis;
  }
  
  double getMinorAxis()
  {
    return minorAxis;
  }
  
  void setMajorAxis(double realMajorAxis)
  {
    majorAxis = realMajorAxis;
  }

  void setMinorAxis(double realMinorAxis)
  {
    minorAxis = realMinorAxis;
  }

  double area()
  {
    //Area of oval is considered to be the area of an ellipse, which is defined to be pi * it's major axis * it's minor axis
    return 3.141592 * majorAxis * minorAxis;
  }
}; 

class Pentagon : public Shape//Class declaration and definition for Area of Pentagon derived from base class Shape. Consider the pentagon cut into 5 triangleseach with a base and a height
{

public:
  Pentagon(double sideLength, double apothem)
  {
    this -> sideLength = sideLength;
    this -> apothem = apothem;
  }

  double getRealSideLength()
  {
    return sideLength;
  }

  double getRealApothem()
  {
    return apothem;
  }

  void setRealSideLength(double sLength)
  {
    sideLength = sLength;
  }

  void setRealApothem(double _apothem)
  {
    apothem = _apothem;
  }

  double area()
  {
    //Area of pentagon is the total area of 5 triangles that are created when the pentagon is cut up
    return 5 * sideLength * apothem;
  }

 private:
  double sideLength;
  double apothem;
};

int main()
{
  int input;
  Shape* shapes[10];
  int counter = 0;

  cout << "Press 1 to create a Diamond, 2 to create an Oval, 3 to create a Pentagon, 4 to print out the shapes created, or 5 to quit: " << endl;
  cin >> input;

  Diamond shape1 = Diamond(1,2);
  Oval shape2 = Oval(2,3);
  Pentagon shape3 = Pentagon(3,4);

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
	  
	  cout << "Enter in Minor Axis: ";
	  double realMinor;
	  cin >> realMinor;

	  shapes[counter] = new Oval(realMajor, realMinor);
	  counter++;
	}

       if (input == 3)
	{
	  cout << "Enter in side length: ";
	  double _realSideLength;
	  cin >> _realSideLength;
       
	  cout << "Enter in apothem: ";
	  double _realApothem;
	  cin >> _realApothem;

	  shapes[counter] = new Pentagon(_realSideLength, _realApothem);
	  counter++;
	}
       
       if(input == 4)
	 {
	   for (int i = 0; i < counter; i++)
	     {
	       cout << "Area: " << shapes[i]->area() << endl;
	     }
	 }
       cout << "Press 1 to create a Diamond, 2 to create an Oval, 3 to create a Pentagon, 4 to print out the shapes created, or 5 to quit: " << endl;
       cin >> input;
    }
  return 0;
}//main
