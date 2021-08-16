#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee
{
    char name[20];
    int employee_id;
    char address[50];
    struct date
    {
        int year;
        int month;
        int day;
    } doj;
    float basic;
} e[];
void display(struct employee e[], int n)
{
    int i;
    float payslip, gross;
    printf("\nEnter the details: \n");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the name of employee %d: ", i + 1);
        scanf("%s", e[i].name);
        printf("Enter employee ID of %s: ", e[i].name);
        scanf("%d", &e[i].employee_id);
        printf("Enter the address of %s: ", e[i].name);
        scanf("%s", e[i].address);
        printf("Enter date of join of %s (YYYY/MM/DD): ", e[i].name);
        scanf("%d/%d/%d", &e[i].doj.year, &e[i].doj.month, &e[i].doj.day);
        printf("Enter basic salary of %s: ", e[i].name);
        scanf("%f", &e[i].basic);
        printf("\n--------------------\n");
    }
    system("cls");
    printf("\nThe details of employee are\n");
    for (i = 0; i < n; i++)
    {
        printf("\nName of Employee %d: %s", i+1, e[i].name);
        printf("\nEmployee ID of %s: %d", e[i].name, e[i].employee_id);
        printf("\nAddress of %s: %s", e[i].name, e[i].address);
        printf("\nDate of join of %s : %d/%d/%d", e[i].name, e[i].doj.year, e[i].doj.month, e[i].doj.day);
        if (e[i].basic >= 15000)
        {
            gross = (e[i].basic) + (0.15 * e[i].basic) + (0.10 * e[i].basic);
            payslip = gross - (0.15 * gross);
        }
        else if (e[i].basic >= 10000)
        {
            gross = (e[i].basic) + (0.1 * e[i].basic) + (0.05 * e[i].basic);
            payslip = gross - (0.01 * gross);
        }
        else
        {
            gross = (e[i].basic) + (0.05 * e[i].basic) + (0.03 * e[i].basic);
            payslip = gross;
        }
        printf("\nAnnual gross income of %s: %.2f", e[i].name, gross * 12);
        printf("\nPayslip of %s: %.2f", e[i].name, payslip);
        printf("\n-----------------\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    display(e, n);
    return 0;
}
