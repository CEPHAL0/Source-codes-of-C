#include <stdio.h>
#include <string.h>
#define NUM 2
struct student
{
    char name[20];
    int roll;
    float marks;
    char remarks[50];
};
int main()
{
    struct student list[NUM];
    int i;
    for (i = 0; i < NUM; i++)
    {
        printf("Enter the name: ");
        scanf("%s", &list[i].name);
        printf("\nEnter the roll no: ");
        scanf("%d", &list[i].roll);
        printf("\nEnter the marks: ");
        scanf("%f", &list[i].marks);
        printf("\nEnter the remarks: ");
        scanf(" %[^\n]", &list[i].remarks);
    }
    printf("The details of student are: \n");
    for (i = 0; i < NUM; i++)
    {
        printf("Name: %s", list[i].name);
        printf("\nRoll: %d", list[i].roll);
        printf("\nMarks: %.2f", list[i].marks);
        printf("\nRemarks: ");
        puts(list[i].remarks);
        printf("\n");
    }
}
