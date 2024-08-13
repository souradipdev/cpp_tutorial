#include<iostream>

int main() {
  int age;
  std::string name;
  std::cout << "What's your age? ";
  std::cin >> age;
  std::cout << "What's your name? ";
//  std::cin >> name;
  std::getline(std::cin >> std::ws, name);

  std::cout << "Hello! " << name << "\nYour age is " << age;

}