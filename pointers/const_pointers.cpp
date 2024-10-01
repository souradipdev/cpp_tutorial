#include "iostream"

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