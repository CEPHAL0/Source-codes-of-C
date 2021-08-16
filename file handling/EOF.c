#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char c;
    fptr = fopen("myfile.txt", "r");
    if (fptr == NULL)
    {
        printf("FILE CANNOT BE CREATED\n");
        exit(0);
    }
    while ((c = fgetc(fptr)) != EOF) /* End Of File */
    {
        printf("%c", c);
    }
    fclose(fptr);
}