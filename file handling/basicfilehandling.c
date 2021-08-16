#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char c;
    char s[100];

    // Open file in write mode
    fptr=fopen("myfile.txt","w");
    if (fptr==NULL)
    {
        printf("The file couldn't be opened\n");
        exit(0);
    }
    fputs("Welcome to C files", fptr);
    fclose(fptr);
    fptr=fopen("myfile.txt", "r");
    fgets(s,100,fptr);
    printf("The content of the file is %s", s);
    fclose(fptr);
    return 0;
}