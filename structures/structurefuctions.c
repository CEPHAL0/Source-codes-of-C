#include <stdio.h>
#include <conio.h>

struct employee
{
    char name[20];
    int id;
    float salary;
} emp;

void display(struct employee e)
{
    printf("Name: %s\n", e.name);
    printf("Employee ID: %d\n", e.id);
    printf("Salary: %f\n", e.salary);
}

int main()
{
    struct employee emp;
    printf("\nEnter the name: ");
    scanf("%s", emp.name);
    printf("\nEnter the ID: ");
    scanf("%d", &emp.id);
    printf("\nEnter the salary: ");
    scanf("%f", &emp.salary);
    printf("\n");
    display(emp);
    return 0;
}