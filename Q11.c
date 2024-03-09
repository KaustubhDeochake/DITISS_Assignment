#include <stdio.h>
#include <string.h>

struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct Employee *e, const char *fname, const char *lname, double salary) {
    strcpy(e->firstName, fname);
    strcpy(e->lastName, lname);
    e->monthlySalary = salary;
}

void set_salary(struct Employee *e, double sal) {
    e->monthlySalary = sal;
}

void emp_display(struct Employee *e) {
    printf("Employee: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: $%.2f\n", e->monthlySalary);
    printf("Yearly Salary: $%.2f\n", e->monthlySalary * 12);
}

void give_raise(struct Employee *e) {
    e->monthlySalary *= 1.10;
}

int main() {
    struct Employee emp1, emp2;

    emp_init(&emp1, "Jay", "XYZ", 5000.0);
    emp_init(&emp2, "Rahul", "ABC", 6000.0);

    printf("Before Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    give_raise(&emp1);
    give_raise(&emp2);

    printf("\nAfter 10%% Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
