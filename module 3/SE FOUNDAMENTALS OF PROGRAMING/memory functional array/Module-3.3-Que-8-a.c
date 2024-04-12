//Write a program of structure employee that provides the following 
//a. information -print and display emp no, emp name, address 
//and age 
//b. Write a program of structure for five employee that 
//provides the following information -print and display 
//emp no, emp name, address and age
#include <stdio.h>

// Define the structure for an employee
struct Employee {
    int empNo;
    char name[50];
    char address[100];
    int age;
};

// Function to print information of an employee
void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.name);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");
}

int main() {
    // Create an array of structures for five employees
    struct Employee employees[5];

    // Input information for each employee
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empNo);
        printf("Employee Name: ");
        scanf("%s", employees[i].name); // Assuming no space in names
        printf("Address: ");
        scanf("%s", employees[i].address); // Assuming no space in addresses
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    // Print information of all employees
    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Details of employee %d:\n", i + 1);
        printEmployee(employees[i]);
    }

    return 0;
}

