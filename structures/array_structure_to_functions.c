#include <stdio.h>
#include <conio.h>

struct example
{
    int num1;
    int num2;
} s[3];

void accept(struct example sptr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter num1: ");
        scanf("%d", &sptr[i].num1);
        printf("\nEnter num2: ");
        scanf("%d", &sptr[i].num2);
        printf("\n");
    }
}

void show(struct example sptr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nNum 1: %d", sptr[i].num1);
        printf("\nNum 2: %d", sptr[i].num2);
        printf("\n");
    }
}

int main()
{
    accept(s, 3);
    printf("\n");
    show(s, 3);
    return 0;
}