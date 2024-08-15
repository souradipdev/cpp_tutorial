#include<iostream>

enum Day {
    sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
    thursday = 4, friday = 5, saturday = 6
};

enum Month {
    January = 5, February = 10, March = 5, April = 20
};

enum Name {
    Souradip, Samyabrata, Subhajit, Ananya, Archita
};

int main() {

  //  enums = a user-defined data type that consists
  //                  of paired named-integer constants.
  //                 GREAT if you have a set of potential options

  Day today = friday;
  Month thisMonth = February;
  Name myName = Souradip;
  std::cout << "Today: " << today << "\n";
  std::cout << "My name: " << myName << "\n"; //0 Default value is automatically added to enums starting from 0
  std::cout << "This month: " << thisMonth << "\n";

  switch (today) {
    case sunday:
      std::cout << "It is Sunday!\n";
      break;
    case monday:
      std::cout << "It is Monday!\n";
      break;
    case tuesday:
      std::cout << "It is Tuesday!\n";
      break;
    case wednesday:
      std::cout << "It is Wednesday!\n";
      break;
    case thursday:
      std::cout << "It is Thursday!\n";
      break;
    case friday:
      std::cout << "It is Friday!\n";
      break;
    case saturday:
      std::cout << "It is Saturday!\n";
      break;
  }

  return 0;
}