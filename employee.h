#include <iostream>

using namespace std;

class employee {
  public: 

    employee() { // employee default constructor 

    }

    employee(string myName, int myId) { // parameterized constructor 
      name = myName; 
      id = myId; 
    }
  
    string getName() { // getter for name 
      return name;
    }

    int getID() { // getter for ID
      return id;
    }

    void setName(string myName) { // setter for name
      name = myName;
    }

    void setID(int myId) { // setter for ID
      id = myId;
    }

    void display() { // display function which outputs attributes of employee object 
      cout << "Name: " << name << "\nID: " << id << endl;
    }


  private: 
    string name;  // private variable name 
    int id; // private variable ID
};