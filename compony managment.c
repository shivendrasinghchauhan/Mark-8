#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

// Employee Structure
struct Employee {
    int id;
    char name[100];
    float salary;
};

// Function Declarations
void addEmployee(struct Employee employees[], int *employeeCount);
void displayEmployees(struct Employee employees[], int employeeCount);
void searchEmployeeById(struct Employee employees[], int employeeCount, int id);

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;
    int choice, id;

    while(1) {
        printf("\nCompany Management Program\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addEmployee(employees, &employeeCount);
                break;
            case 2:
                displayEmployees(employees, employeeCount);
                break;
            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                searchEmployeeById(employees, employeeCount, id);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to add a new employee
void addEmployee(struct Employee employees[], int *employeeCount) {
    if (*employeeCount >= MAX_EMPLOYEES) {
        printf("Cannot add more employees. Maximum limit reached.\n");
        return;
    }

    struct Employee newEmployee;

    printf("Enter Employee ID: ");
    scanf("%d", &newEmployee.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]%*c", newEmployee.name);  // To capture spaces in name
    printf("Enter Employee Salary: ");
    scanf("%f", &newEmployee.salary);

    employees[*employeeCount] = newEmployee;
    (*employeeCount)++;

    printf("Employee added successfully!\n");
}

// Function to display all employees
void displayEmployees(struct Employee employees[], int employeeCount) {
    if (employeeCount == 0) {
        printf("No employees to display.\n");
        return;
    }

    printf("\nEmployee List:\n");
    for (int i = 0; i < employeeCount; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

// Function to search for an employee by ID
void searchEmployeeById(struct Employee employees[], int employeeCount, int id) {
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            printf("Employee Found:\n");
            printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}
