#include <iostream>
#include <vector>

#include "employee.h"

using namespace std;

void Display(employee &robert);
void setEmployeeData(employee &robert);
int main() {
  int choice; 
  bool programEnd = false;

  employee robert("Robert", 203491);

  while (!programEnd) {
    cout << "What would you like to do?\n";
    cout << "1.) View Employee Contents\n2.) Edit Employee Contents\n3.) End Program\n\n";

    cin >> choice;

    if (choice == 1) {
      Display(robert);
    } else if (choice == 2) {
      setEmployeeData(robert);
    } else if (choice == 3) {
      programEnd = true;
    } else {
      cout << "Input Invalid, please try again:\n";
      main();
    }

  }
  return 0;
}

void Display(employee &robert) {
  cout << "CURRENT USER:\n";
  robert.display();
  cout << "\n====================\n";
}

void setEmployeeData(employee &robert) {
  string inputName;
  int inputID;

  cout << "\nInsert a new name: ";
  cin >> inputName; 
  cout << "\nInsert a new ID: ";
  cin >> inputID;

  robert.setName(inputName);
  robert.setID(inputID);
  cout << "\n====================\n";

}