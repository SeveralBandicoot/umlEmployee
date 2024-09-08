#include <iostream>

using namespace std;

class employee {
  public: 

    employee() {

    }

    employee(string myName, int myId) {
      name = myName; 
      id = myId; 
    }
  
    string getName() {
      return name;
    }

    int getID() {
      return id;
    }

    void setName(string myName) {
      name = myName;
    }

    void setID(int myId) {
      id = myId;
    }

    void display() {
      cout << "Name: " << name << "\nID: " << id << endl;
    }


  private: 
    string name; 
    int id;
};