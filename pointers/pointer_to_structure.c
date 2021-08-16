#include <stdio.h>
struct Employee
{
    char name[20];
    int id;
    int sal;
};

int main()
{
    struct Employee e1, *ptr;
    ptr = &e1;
    printf("Enter the name: ");
    scanf("%[^\n]", ptr->name);
    printf("\nEnter the id: ");
    scanf("%d", &ptr->id);
    printf("\nEnter the salary: ");
    scanf("%d", &ptr->sal);
    printf("Name: %s\nID:%d\nSalary:%d", ptr->name, ptr->id, ptr->sal);
    return 0;
}