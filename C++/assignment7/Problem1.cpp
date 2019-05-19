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

//Class declaration and definition for Area of a diamond derived from base class Shape. Consider the diamond cut into 4 triangles via 2 diagonals
class Diamond : public Shape
{
private:
  double firstDiagonal;
  double secondDiagonal;

public:
  Diamond(double firstDiagonal, double secondDiagonal)
  {
    this -> firstDiagonal = firstDiagonal;
    this -> secondDiagonal = secondDiagonal;
  }

  double getFirstDiagonal()
  {
    return firstDiagonal;
  }

  double getSecondDiagonal()
  {
    return secondDiagonal;
  }

  void setBase(double _firstDiagonal)
  {
    firstDiagonal = _firstDiagonal;
  }

  void setHeight(double _secondDiagonal)
  {
    secondDiagonal = _secondDiagonal;
  }

  double area()
  {
    //Area of a diamond is considered to be the multiplication of it's diagonals divided by 2
    return (firstDiagonal * secondDiagonal) / 2;
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
  Shape* shapes[10];//array that holds pointers to Shape objects
  int counter = 0;//Keeps track of index of elements in shapes
  cout << "Press 1 to create a Diamond, 2 to create an Oval, 3 to create a Pentagon, 4 to print out the shapes created, or 5 to quit: " << endl;
  cin >> input;

  //Objects used to test all classes
  Diamond shape1 = Diamond(1,2);
  Oval shape2 = Oval(2,3);
  Pentagon shape3 = Pentagon(3,4);

  //execution of menu to choose which shape(s) to create and if they would like to print it  
  while (input != 5)
    {
      if (input == 1)
	{
	  cout << "Enter in base: ";
	  double realFirstDiagonal;
	  cin >> realFirstDiagonal;
       
	  cout << "Enter in height: ";
	  double realSecondDiagonal;
	  cin >> realSecondDiagonal;

	  shapes[counter] = new Diamond(realFirstDiagonal,realSecondDiagonal);//element is a pointer to shape class that acts like a Diamond object instantiated from the Diamond class, which is a derived class to shapes
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

	  shapes[counter] = new Oval(realMajor, realMinor);//element is a pointer to shape class that acts like a Oval object instantiated from the Oval class, which is a derived class to shapes
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

	  shapes[counter] = new Pentagon(_realSideLength, _realApothem);//element is a pointer to shape class that acts like a Pentagon object instantiated from the Pentagon class, which is a derived class to Shape
	  counter++;
	}
       
       if(input == 4)
	 {
	   for (int i = 0; i < counter; i++)
	     {
	       cout << "Area: " << shapes[i] -> area() << endl;//shapes[i] -> area() is a pointer to the area() function found within the objects of the different derived classes of the base class Shape
	     }
	 }
       cout << "Press 1 to create a Diamond, 2 to create an Oval, 3 to create a Pentagon, 4 to print out the shapes created, or 5 to quit: " << endl;
       cin >> input;
    }
  return 0;
}//main
