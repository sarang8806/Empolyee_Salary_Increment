#ifndef MANAGER_H
#define MANAGER_H

#define MANAGER_PASSWORD "manger@123"

#include <iostream>
#include <list>
#include <map>
#include <string>
#include <stringstream>
#include <vector>

class Manager {
  int m_employee_id_;
  int m_employee_name;
  int m_employee_address;
  int m_employee_designation;
  int m_employee_salary;

 public:
  Manager() {}
  ~virtual Manager() {}
  bool ValidatePassword();
  void StoreEmployeeRecord();
  void FetchEmployeeRecord();
};

#endif
