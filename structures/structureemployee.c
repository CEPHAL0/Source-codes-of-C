#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee
{
    char name[20];
    char address[50];
    int salary;
    struct date
    {
        int day;
        int month;
        int year;
    } doj;
};
int main()
{
    int i, n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employee list[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf(" %[^\n]", &list[i].name);
        printf("Enter the address: ");
        scanf(" %[^\n]", &list[i].address);
        printf("Enter the date of joining(DD/MM/YY): ");
        scanf("%d/%d/%d", &list[i].doj.day, &list[i].doj.month, &list[i].doj.year);
        printf("\n");
    }
    system("cls");
    printf("The details of employee are: \n");
    for (i = 0; i < n; i++)
    {
        printf("\nName: %s", list[i].name);
        printf("\nAddress: %s", list[i].address);
        printf("\nDate of Joining: %d/%d/%d", list[i].doj.day, list[i].doj.month, list[i].doj.year);
        printf("\n");
    }
    return 0;
}