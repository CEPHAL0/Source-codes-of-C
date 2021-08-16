// Q.2 WAP to read and write data from file

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c[100];
    char s[100];
    FILE *f;
    f = fopen("test.txt", "w");
    printf("Enter the data of file: ");
    scanf("%[^\n]", c);
    fprintf(f, "%s", c);
    fclose(f);

    f = fopen("test.txt", "r");
    fscanf(f, "%[^\n]", s);
    printf("\nThe contents of file are: %s", s);
    fclose(f);
    return 0;
}