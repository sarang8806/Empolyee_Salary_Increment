#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "../include/manager.h"

// Here all the salary related implementation would be done.
// next step : 1.create factory class for SalaryIncrement
//            2.use unique_ptr at global function

class SalaryIncrement {
 public:
  virtual void IncrementSalary() = 0;
};

class SoftwareEngineer : public SalaryIncrement {
 public:
  void IncrementSalary();
};

class SrSoftwareEngineer : public SalaryIncrement {
 public:
  void IncrementSalary();
};

class TechLead : public SalaryIncrement {
 public:
  void IncrementSalary();
};

#endif
