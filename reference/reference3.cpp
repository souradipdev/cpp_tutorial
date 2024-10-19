#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};

  for (int &elem: arr) {
    elem += 10; // Original array will be modified as &elem is a reference to the current element it is pointing
  }

  for (int elem: arr) {
    cout << elem << " ";
  }
}