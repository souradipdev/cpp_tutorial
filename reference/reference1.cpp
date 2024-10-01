#include <iostream>

/*A const reference can bind to a rvalue. When you write const int &a = 10;, the compiler creates a temporary variable to hold the value 10, and a is bound to this temporary.
This is safe because the reference is const, meaning you cannot modify the temporary value through the reference.
The temporary object created by the compiler will persist as long as the reference exists, so there's no risk of the reference pointing to a non-existent or invalid object.*/
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
//  int &refC = c; // error: Cannot bind a non-constant int reference type to a double value

  return 0;
}