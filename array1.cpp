#include <iostream>

using namespace std;

int main() {

  int arr[3][3] = {
          {1, 2, 3},
          {4, 5, 6},
          {7, 8, 9}
  };

  cout << *(*(arr + 2) + 1) << endl; // arr[2][1]

  cout << arr << endl; // 0x7ffe4a2e24e0 (Returns address of the first element of the array)
  cout << &arr[0][0] << endl; // 0x7ffe4a2e24e0
}