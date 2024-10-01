#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> arr1;

  for (int i = 0; i < 10; i++) {
    arr1.push_back(i + 1);
  }

  for (auto a = arr1.begin(); a < arr1.end(); a++) {
    cout << *a << " ";
  }
  cout << "\nSize before resizing: " << arr1.size() << endl;
  arr1.resize(5); // Resize the vector and remove memory allocations from the end
  cout << "Size after resizing: " << arr1.size() << endl;

  cout << "Elements after resizing: ";
  for (int elem: arr1) {
    cout << elem << " ";
  }

  if (arr1.empty()) {
    cout << "\arr2 is empty" << endl;
  } else {
    cout << "\arr2 is not empty" << endl;
  }

  arr1.clear();
}