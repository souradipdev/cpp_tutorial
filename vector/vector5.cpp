#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr1;

  arr1.push_back(40);
  arr1.push_back(30);
  arr1.push_back(60);
  arr1.push_back(20);
  arr1.push_back(50);
  arr1.push_back(10);

  vector<int>::iterator itr;
  cout << "\nThe set arr1 is : \n";

  for (itr = arr1.begin(); itr != arr1.end(); itr++) {
    cout << *itr << " ";
  }
  cout << endl;

  vector<int> arr2(arr1.begin(), arr1.end());


  cout << "\nThe set arr2 after assign from arr1 is : " << endl;
  for (itr = arr2.begin(); itr != arr2.end(); itr++) {
    cout << *itr << " ";
  }
  cout << endl;

  cout << "After removing 1st 3 elements from the vector: " << endl;
  arr2.erase(arr2.begin(), arr2.begin() + 3);
  for (itr = arr2.begin(); itr != arr2.end(); itr++) {
    cout << *itr << " ";
  }

  arr2.erase(arr2.end() - 1);

  cout << endl << "After removing last element from vector" << endl;
  for (itr = arr2.begin(); itr != arr2.end(); itr++) {
    cout << *itr << " ";
  }


  return 0;
}