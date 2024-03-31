#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nDetails of employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].empId);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
/*
Enter details for employee 1:
Employee ID: 1
Name: pooji
Salary: 1000000
Enter details for employee 2:
Employee ID: 2
Name: sasi
Salary: 20000
Enter details for employee 3:
Employee ID: 3
Name: adi
Salary: 4000000

Details of employees:
Employee 1:
Employee ID: 1
Name: pooji
Salary: 1000000.00
Employee 2:
Employee ID: 2
Name: sasi
Salary: 20000.00
Employee 3:
Employee ID: 3
Name: adi
Salary: 4000000.00
*/
