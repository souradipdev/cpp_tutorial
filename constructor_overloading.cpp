#include<iostream>

using namespace std;

class Pizza {
public:
    string topping1;
    string topping2;

    Pizza() {}

    Pizza(string topping1) {
      this->topping1 = topping1;
    }

    Pizza(string topping1, string topping2) {
      this->topping1 = topping1;
      this->topping2 = topping2;
    }
};

int main() {
  Pizza pizza1;
  Pizza pizza2("Pepperoni");
  Pizza pizza3("Pepperoni", "Margarita");

  /*cout << pizza1.topping1 <<"\n";
  cout << pizza1.topping2 <<"\n";*/

  cout << pizza3.topping1 << "\n";
  cout << pizza3.topping2 << "\n";

}