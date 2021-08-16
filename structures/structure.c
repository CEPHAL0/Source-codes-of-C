#include <stdio.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[30];
    int phone_number;
};
int main()
{
    struct student p1 = {1, "Ram", 123};
    struct student p2;
    p2=p1;
    printf("roll_no: %d\t name: %s\t phone_number:%d", p2.roll_no, p2.name, p2.phone_number);
    return 0;
}