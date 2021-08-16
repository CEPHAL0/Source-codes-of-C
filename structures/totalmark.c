#include <stdio.h>
#include <conio.h>
struct student
{
    int maths;
    int social;
    int english;
    int science;
} s;

void getdata(struct student s)
{
    int total;
    printf("Enter maths marks: ");
    scanf("%d", &s.maths);
    printf("Enter social marks: ");
    scanf("%d", &s.social);
    printf("Enter english marks: ");
    scanf("%d", &s.english);
    printf("Enter science marks: ");
    scanf("%d", &s.science);
    total = s.maths + s.social + s.english + s.science;
    printf("The total marks is: %d", total);
}

int main()
{
    struct student c;
    int total;
    getdata(c);
    return 0;
}