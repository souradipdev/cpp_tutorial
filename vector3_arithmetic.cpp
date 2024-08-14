#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Define and initialize vectors
  vector<int> vec1 = {1, 2, 3, 4, 5};
  vector<int> vec2 = {1, 2, 3, 4, 5};
  vector<int> vec3 = {1, 2, 3, 4};
  vector<int> vec4 = {5, 4, 3, 2, 1};

  // Equality comparison (==)
  if (vec1 == vec2) {
    cout << "vec1 and vec2 are equal." << endl;
  } else {
    cout << "vec1 and vec2 are not equal." << endl;
  }

  // Inequality comparison (!=)
  if (vec1 != vec3) {
    cout << "vec1 and vec3 are not equal." << endl;
  } else {
    cout << "vec1 and vec3 are equal." << endl;
  }

  // Less-than comparison (<)
  if (vec3 < vec1) {
    cout << "vec3 is less than vec1." << endl;
  } else {
    cout << "vec3 is not less than vec1." << endl;
  }

  // Less-than-or-equal comparison (<=)
  if (vec3 <= vec1) {
    cout << "vec3 is less than or equal to vec1." << endl;
  } else {
    cout << "vec3 is not less than or equal to vec1." << endl;
  }

  // Greater-than comparison (>)
  if (vec1 > vec3) {
    cout << "vec1 is greater than vec3." << endl;
  } else {
    cout << "vec1 is not greater than vec3." << endl;
  }

  // Greater-than-or-equal comparison (>=)
  if (vec1 >= vec2) {
    cout << "vec1 is greater than or equal to vec2." << endl;
  } else {
    cout << "vec1 is not greater than or equal to vec2." << endl;
  }

  // Testing with a vector that has different order
  if (vec4 < vec1) {
    cout << "vec4 is less than vec1 (based on lexicographical order)." << endl;
  } else {
    cout << "vec4 is not less than vec1." << endl;
  }

  return 0;
}
