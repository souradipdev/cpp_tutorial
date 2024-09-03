#include "iostream"

/*A const reference can bind to an rvalue. When you write const int &a = 10;, the compiler creates a temporary variable to hold the value 10, and a is bound to this temporary.
This is safe because the reference is const, meaning you cannot modify the temporary value through the reference.
The temporary object created by the compiler will persist as long as the reference exists, so there's no risk of the reference pointing to a non-existent or invalid object.*/
using namespace std;

int main() {

  double a = 2.0;
  const double *ptrA = &a;

//  *ptrA = 3.0; // error: assignment of read-only location ‘* ptrA’
  cout << *ptrA << endl;

  const double b = 3.0;
  const double *ptrB = &b; // Can be made to point to a different variable
  // const variable can be only be pointed by a const pointer
  // *ptrB = 4.0; // error

  ptrB = &a;

  const double *const ptrB2 = &b; // *const pointer variable cannot be made to point to a different variable
//  ptrB2 = ptrA; // error: assignment of read-only variable ‘ptrB2’

}