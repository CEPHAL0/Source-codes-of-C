#include <stdio.h>
#include <conio.h>
struct student
{
    char name[20];
    int roll;
    int marks;
} s;

struct student getdata()
{
    struct student s;
    printf("Enter the name: ");
    scanf(" %[^\n]", &s.name);
    printf("Enter the roll: ");
    scanf("%d", &s.roll);
    printf("Enter the marks: ");
    scanf("%d", &s.marks);
    return s;
}

int main()
{
    struct student s;
    s = getdata();
    printf("\n--------Displaying Information------------");
    printf("\nName: %s", s.name);
    printf("\nRoll: %d", s.roll);
    printf("\nMarks: %d", s.marks);
    return 0;
}