// Q.3. WAP to write integer data into file and read and write odd number to one file and evwen numbers in another file

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int b;
    FILE *f, *o, *e;
    printf("Enter the number: ");
    scanf("%d", &a);
    f = fopen("original.txt", "w");
    fprintf(f, "%d", a);
    fclose(f);

    f = fopen("original.txt", "r");
    fscanf(f, "%d", &a);
    if (a % 2 == 0)
    {
        e = fopen("even.txt", "w");
        fprintf(e, "%d", a);
        fclose(e);
        printf("\nSuccessfully wrote the integer %d in even.txt", a);
    }
    else
    {
        o = fopen("odd.txt", "w");
        fprintf(o, "%d", a);
        fclose(o);
        printf("Successfully wrote the integer %d in odd.txt", a);
    }
    return 0;
}