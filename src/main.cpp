#include "../include/employee.h"

int main(void) {
  std::cout << "\t\tEMPLOYEE SALARY MANAGEMENT SYSTEM" << std::endl;
  int choice = -1;

  while (choice != 0) {
    std::cout << "1.Enter Employee Data\n"
              << "2.Get Employee Details\n"
              << "3.Employee Salary Increment\n"
              << "0.Exit\n";
    switch (choice) {
      case 1:
        // Enter Employee Data
        // 1.Name 2.Emp id 3.Designation
        break;
      case 2:
        // Enter Manger Password
        // GetEmployeeDetails
        break;
      case 3:
        // Enter Manager Password
        // Employee Salary Increment
        break;

      default:
        std::cout << "Please enter valid option\n";

      case 0:
        std::cout << "Thank You !\n" break;

        break;
    }
  }
  return 0;
}
