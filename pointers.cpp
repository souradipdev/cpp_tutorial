#include <iostream>

using namespace std;

int passByReference(const int *a, const int *b) {
  return *a + *b;
}

int main() {

  const int a = 5, b = 10;
  const int result = passByReference(&a, &b);

  cout << "Result " << result << "\n";
}
