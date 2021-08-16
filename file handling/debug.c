#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int b;
    FILE *f, *o, *e;
    printf("Enter the number: ");
    scanf("%d", &a);
    f = fopen("test.txt", "w");
    fprintf(f, "%d", a);
    fclose(f);

    f = fopen("test.txt", "r");
    fscanf(f, "%d", &a);
    if (a % 2 == 0)
    {
        e = fopen("even.txt", "w");
        fprintf(e, "%d", a);
        fclose(e);
        printf("\n appended numbers in %d in even.txt", a);
    }
    else
    {
        o = fopen("odd.txt", "w");
        fprintf(o, "%d", a);
        fclose(o);
        printf("appended numbers %d in odd.txt", a);
    }
    return 0;
}