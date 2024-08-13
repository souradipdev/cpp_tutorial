#include <iostream>

void myFunc();

int myNum = 5;

int main() {
  int myNum = 10;

//  std::cout << ::myNum;
  myFunc();

}

void myFunc() {
  int myNum = 15;
  for (int i = 0; i < 1; i++){
    int myNum = 20;
    std::cout<< ::myNum;
  }

//    std::cout << ::myNum;
}