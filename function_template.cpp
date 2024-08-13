#include <iostream>

using namespace std;

template<typename T, typename U>

int max(T a, U b) {

  return a > b ? a : b;
}

int main() {

  cout << max(2.1, 7.5) << "\n";
}