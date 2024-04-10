#include <stdio.h>

// Define a structure to store details of an employee
struct Employee {
    char name[50];
    int employee_id;
    float experience;
    float salary;
};

int main() {
    // Define an array of struct Employee to store details of 5 employees
    struct Employee employees[5];

    // Input details for each employee
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employee_id);
        printf("Experience (in years): ");
        scanf("%f", &employees[i].experience);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Print details of all employees
    printf("\nDetails of all employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employee ID: %d\n", employees[i].employee_id);
        printf("Experience: %.1f years\n", employees[i].experience);
        printf("Salary: $%.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}