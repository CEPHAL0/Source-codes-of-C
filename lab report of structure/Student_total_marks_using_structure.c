#include <stdio.h>
struct student
{
    char name[50];
    float marks[5];
} s[];

void getdata(struct student s[], int n)
{
    int i, j;
    float ttl[n];
    for (j = 0; j < n; j++)
    {
        ttl[j] = 0;
        printf("Enter name of Student-%d: ", j + 1);
        scanf(" %[^\n]", &s[j].name);
        for (i = 0; i < 5; i++)
        {
            printf("Enter the marks of Subject %d for %s: ", i + 1, s[j].name);
            scanf("%f", &s[j].marks[i]);
            ttl[j] += s[j].marks[i];
        }
        printf("\n");
    }
    printf("The details of students are: \n");
    for (j = 0; j < n; j++)
    {
        printf("\nName: %s", s[j].name);
        printf("\nTotal marks : %.2f ", ttl[j]);
        printf("\n----------------------\n");
    }
}
int main()
{
    int n;
    printf("How many students?");
    scanf("%d", &n);
    printf("\n----------------------\n");
    getdata(s, n);
    return 0;
}