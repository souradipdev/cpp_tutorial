#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  srand(time(NULL));
  vector<int> arr1;
  arr1.assign(9, 1);

  /*for (int elem: arr1) {
    cout << elem << endl;
  }*/

  vector<int> arr2(10);
  for (int i = 0; i < 10; i++) {
    arr2[i] = i;
  }

  /* for (int elem: arr2) {
     cout << elem << endl;
   }*/

  cout << "Size of arr2: " << arr2.size() << endl;

  arr2.push_back(rand() % 10);
  arr2.push_back(rand() % 10);
  arr2.pop_back();
  for (int elem: arr2) {
    cout << elem << endl;
  }

  arr2.insert(arr2.begin() + 2, 100); //Accessing 3rd element
  cout << "\nStart element after inserting at beginning: " << arr2[2] << endl;
  arr2.pop_back();
  arr2.pop_back();

  cout << "Start element: " << arr2.front() << endl; // Access the start element
  cout << "End element: " << arr2.back() << endl; // Access the end element
  cout << "No of elements now: " << arr2.size() << endl; // 10
  //  cout << "Tot size of arr2: " << arr2.max_size(); // The theoretical maximum number of elements the vector can hold.
  cout << "Tot capacity of arr2: " << arr2.capacity() << endl; // 20
  // (Vector allocates enough memory to prevent reallocation multiple times which is double to initial assigned size)

  arr2.clear();  // Clears the memory assigned to the vector
  if (arr2.empty()) {
    cout << "arr2 is empty" << endl;
  } else {
    cout << "arr2 is not empty" << endl;
  }
  return 0;
}