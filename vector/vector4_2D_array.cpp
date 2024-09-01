#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> matrix1 = {
          {1, 2, 3},
          {4, 5, 6},
          {7, 8, 9}
  }; // Direct allocation

  vector<vector<int>> matrix2(3, vector<int>(5)); // Only memory allocated

  cout << "Initial matrix2:" << endl;
  for (const vector<int> &row: matrix2) {
    for (int value: row) {
      cout << value << " ";
    }
    cout << endl;
  }

  /*for (int i = 0; i < matrix2.size(); i++) {
    for (int j = 0; j < matrix2[i].size(); j++) {
      cout << matrix2[i][j] << " ";
    }
    cout << endl;
  }*/

  const vector<vector<int>>* ptrMatrix2 = &matrix2; // Storing address of matrix2
  const vector<int>* ptrMatrix2Row =  &matrix2[0]; // Storing address of first row of the matrix2

  cout << "Deference value: " <<(*ptrMatrix2)[0][1] << endl;
  return 0;
}