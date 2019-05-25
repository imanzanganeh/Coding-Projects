//Iman Arfa-Zanganeh
//Assignment 8
//Problem #1

#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
  virtual void printDescription() = 0;
  int type;
  string owner;
  bool drive;
};

class Truck: public Car
{
private: 
  bool beeb;

public:
  Truck(string owner, bool drive, bool beeb)
  {
    this -> owner = owner;
    this -> drive = drive;
    this -> beeb = beeb;
  }

  void printDescription()
  {
    if (beeb == 0)
      {
	cout << "Truck's owner: " << owner << endl;
	cout << "Honk the horn: false" << endl;
      }
    else
      {
	cout << "Truck's owner: " << owner << endl;
	cout << "Honk the horn: true" << endl;
      }
  }
  
};

class Bus: public Car
{
private:
  int seat;

public:

  Bus(string owner, bool drive, int seat)
  {  
    this -> owner = owner;
    this -> drive = drive;
    this -> seat = seat;
  }
  
  void printDescription()
  {
    cout << "Bus's owner: " << owner << endl;
    cout << "Seat amount: " << seat << endl;
  }
};

class sportCar: public Car
{
private:
 double speed;

public:

  sportCar(string owner, bool drive, double speed)
  {
    this -> owner = owner;
    this -> drive = drive;
    this -> speed = speed;
  }

  void printDescription()
  {
    cout << "Sport car's owner: " << owner << endl;
    cout << "Speed: " << speed << endl;
  }
};

int main()
{
  //Arbitrary values are assigned; can be changed anytime
  string vehicleOwner = "Iman";
  bool _drive = 0;
  bool _beeb = 1;
  int _seat = 99;
  double _speed = 87.5;
 
  int size = 3; //size of array. Let length be equal to an arbitrary value 3
  Car* vehicles[size];

  vehicles[0] = new Truck(vehicleOwner, _drive, _beeb);
  vehicles[1] = new Bus(vehicleOwner, _drive, _seat);
  vehicles[2] = new sportCar(vehicleOwner, _drive, _speed);
  
  for (int i = 0; i < size; i++)
    {
      vehicles[i] -> printDescription();
      cout << endl;
    }
  return 0;
}//main

