#include "Teacher.h"
using namespace std;
Teacher:: Teacher()
{
  
}
//getters
string Teacher::getSpecialty() 
{
  return specialty;
}
string Teacher:: getDegree()
{
  return degree;
}
char Teacher:: getStatus()
{
  return status;
}
//setters
void Teacher:: setSpecialty(string specialty)
{
  this->specialty=specialty;
}
void Teacher:: setDegree(string degree)
{
  this->degree=degree;
}
void Teacher:: setStatus(char status)
{
  this->status=status;
}
//Payroll Calculator
int Teacher::computePayroll(int hoursWorked, string deg) //this is for a part-time teacher
{
  int payroll=0;
  if (deg == "Bachelors")
  {
    payroll= hoursWorked * 42 * 2 * 0.76;
  }
  else if (deg == "Masters")
  {
    payroll= hoursWorked * 82 * 2 * 0.76;
  }
  else if (deg == "PhD")
  {
    payroll= hoursWorked * 112 * 2 * 0.76;
  }
  else
    ;
  return payroll;
}

int Teacher::computePayroll(string deg) //this is for a full-time teacher
{
  int payroll=0;
  if (deg == "Bachelors")
  {
    payroll= 32 * 42 * 2 * 0.85;
  }
  else if (deg == "Masters")
  {
    payroll= 32 * 82 * 2 * 0.85;
  }
  else if (deg == "PhD")
  {
    payroll= 32 * 112 * 2 * 0.85;
  }
  else
    ;
  return payroll;
}

Teacher:: Teacher(string x, string y, char z) //Input Teacher Info
{
  x=specialty;
  y=degree;
  z= status;
}

