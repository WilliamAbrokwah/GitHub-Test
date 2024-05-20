#pragma once
#include "Teacher.h"
#include "Person.h"
using namespace std;
#include <string>
class Teacher
{
  private:
    string specialty; //private members
    string degree;
    char status; //either P for part-time or F for full-time
  public:
    Teacher(); //constructor
    Teacher(string, string, char); //Info about the teacher
    string getSpecialty(); //getters
    string getDegree();
    char getStatus();
    void setSpecialty(string); //setters
    void setDegree(string);
    void setStatus(char);
    int computePayroll(int, string); //compute payroll
    int computePayroll(string);
    
};

