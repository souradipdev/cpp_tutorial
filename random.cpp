#include <iostream>
#include <cmath>
using namespace std;

int main() {
  srand(time(NULL));
  cout << (rand() % 900000) + 100000;
}