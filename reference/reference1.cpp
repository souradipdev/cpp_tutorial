#include <iostream>

using namespace std;

int main() {

  int a = 1024;
  int &refA = a;

//  int &refAA; // error: a reference must be initialed
  refA = 2048;
  cout << "a = " << a << endl << "refA = " << refA << endl;

  int b = 100;
  refA = b; // value of refA becomes 100 but still it is reference to a

  int &refAA = refA;
  refAA = 150;

  cout << endl;
  cout << "b = " << a << endl << "refVal1 = " << refA << endl << "refAA = " << refAA << endl;

  double c = 200.0;
//  int &refC = c; // error:  Cannot bind a non-constant int reference type to a double value

  return 0;
}