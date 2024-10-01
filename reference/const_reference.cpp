#include <iostream>

using namespace std;

int main() {

  const int a = 1024;
//  int &refA = a; // error: const int should be bound to const reference
  const int &refA = a;
//  refA = 2048; // error: value cannot be changed

  cout << "a = " << a << endl << "refA = " << refA << endl;
//  int &refB = 100; // error: Non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
  const int &refB = 100;
  const int &refBB = refB;

  cout << endl;
  cout << "refB = " << refB << endl << "refBB " << refBB << endl;

  double c = 200.0;
  const int &refC = c;

  cout << endl;
  cout << "c = " << c << endl << "refC = " << refC << endl;

  return 0;
}