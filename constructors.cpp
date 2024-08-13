#include <iostream>

using namespace std;

class Car {
public:
    string model;
    string make;
    int year;
    string color;

    Car(string model, string make, int year, string color) {
      this->model = model;
      this->make = make;
      this->year = year;
      this->color = color;
    }

};

int main(){

  Car car1("Mustang", "Ford", 2024, "blue");

  cout << "Car2: " << "\n";
  cout << car1.model << "\n";
  cout << car1.make << "\n";
  cout << car1.year << "\n";
  cout << car1.color << "\n";
}