#include <bits/stdc++.h>
using namespace std;

set<int> s;

void inorderPredecessor(int key)
{
  if (s.find(key) == s.end()) {
    cout << "Key doesn't exist\n";
    return;
  }

  set<int>::iterator it;
  it = s.find(key); // get iterator of key

  // If iterator is at first position
  // Then, it doesn't have predecessor
  if (it == s.begin()) {
    cout << "No predecessor\n";
    return;
  }

  --it; // get previous element
  cout << "predecessor of " << key << " is = ";
  cout << &(it) << "\n";
}

void inorderSuccessor(int key)
{
  if (s.find(key) == s.end()) {
    cout << "Key doesn't exist\n";
    return;
  }

  set<int>::iterator it;
  it = s.find(key); // get iterator of key
  ++it; // get next element

  // Iterator points to NULL (Element does
  // not exist)
  if (it == s.end())
  {
    cout << "No successor\n";
    return;
  }
  cout << "successor of " << key << " is = ";
  cout << *(it) << "\n";
}

int main()
{
  s.insert(1);
  s.insert(5);
  s.insert(2);
  s.insert(9);
  s.insert(8);

  inorderPredecessor(5);
  inorderPredecessor(1);
  inorderPredecessor(8);
  inorderSuccessor(5);
  inorderSuccessor(2);
  inorderSuccessor(9);
  inorderSuccessor(10);

  return 0;
}