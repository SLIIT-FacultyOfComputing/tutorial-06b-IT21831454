#include "Student.h"
#include <iostream>
#include <cstring>

// Assign studentId and name
Student::assignDetails(int Id, char n[]) {
studentId = Id;
strcpy(name,n);
  
  
}

// Display StudentId and Name
Student::display() {

  cout<<"Student Id : "<<studentId<<endl;
  cout<<"student name : "<<name;
  
  
}
