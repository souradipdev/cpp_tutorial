#include<iostream>

using namespace std;

class Car {
public:
    string model;
    string make;
    int year;

    void accelerate() {
      cout << "You step on the gas " << "\n";
    };

    static void brake() {
      cout << "You step on brake " << "\n";
    }
};

int main() {
  Car car1;
  car1.model = "Mustang";
  car1.make = "Ford";
  car1.year = 2024;
  cout << car1.model << "\n";
  cout << car1.make << "\n";
  cout << car1.year << "\n";
  car1.accelerate();
  Car::brake();
}