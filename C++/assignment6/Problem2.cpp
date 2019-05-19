//Iman Arfa-Zanganeh
//Assignment #6
//Problem #2
#include <iostream>
#include <string>

using namespace std;

class Brain
{
public:
  
  Brain()
  {
    cout << "I think I am smart!" << '\n';
  }
};

class Student
{
private:
  string name;
  Brain myBrain;
public:

  Student()
  {
    cout << "Default Constructor is called!" << '\n';
  }

  Student(string name)
  {
    this -> name = name;//this keyword is a pointer that points to current object. The whole statement sets the name instance variable to the instance's parameter
  }

  void setName(string _name)
  {
    name = _name;
  }

  string getName()
  {
    return name;
  }
  void printName()
  {
    cout << "My name is " << name << '\n';
  }
};

int main()
{
  cout << "Hello C++! I love CS52" << '\n';
  
  Student person1;//Instantiates using default constructor
  Student person2("Iman Arfa-Zanganeh");//Instantiates using parameterized constructor

  // set and print name 
  person1.setName("Iman Arfa-Zanganeh");
  person1.getName();
  person1.printName();
}

