/*
Q4 – UML Employee

@ AJ Enrique Arguello

9/07/24

Create the following .h and an Object in main( ) to test each Method( )

        Employee

- name string

- i.d. int

<<constructor>>Employee(string name, int i.d)

+getName() : string

+getID() : int

+setName(string)

+setID(double)

+display( ) to display all variables

Display each attribute, modify them and display again
*/

#include <iostream>
#include <vector>

#include "employee.h"

using namespace std;

void Display(employee &robert); // prototypes with employee object passed through by reference 
void setEmployeeData(employee &robert);
int main() {
  int choice; 
  bool programEnd = false; // bool variable set to false which will determine whether or not the program is ending

  employee robert("Robert", 203491); // default values for employee object

  while (!programEnd) { // while programEnd is set to false 
    cout << "What would you like to do?\n";
    cout << "1.) View Employee Contents\n2.) Edit Employee Contents\n3.) End Program\n\n";

    cin >> choice;

    if (choice == 1) { // if choice is equal to 1, attributes will display 
      Display(robert);
    } else if (choice == 2) { // if choice is equal to 2, user is able to edit attributes of employee object 
      setEmployeeData(robert);
    } else if (choice == 3) { // if choice is equal to 3, program will end
      programEnd = true;
    } else { // if there is bad data, invalid input error will be thrown
      cout << "Input Invalid, please try again:\n";
      main();
    }

  }
  return 0;
}

void Display(employee &robert) { // displays attributes of employee object 
  cout << "CURRENT USER:\n";
  robert.display();
  cout << "\n====================\n";
}

void setEmployeeData(employee &robert) { // function which allows user to edit the attributes of employee object
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