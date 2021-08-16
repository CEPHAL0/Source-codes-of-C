#include <stdio.h>
#include <stdlib.h>

void fileread(char myfilename[])
{
    FILE *fptr;
    char c;
    int n = 0;
    fptr = fopen(myfilename, "r");
    if (fptr == NULL)
    {
        printf("\nFILE CANT BE OPENED");
        exit(0);
    }
    else
    {
        do
        {
            c = fgetc(fptr);
            if (c == '$')
            {
                n++;
            }
        } while (c != EOF);
        fclose(fptr);
        printf("The file contains %d dolar sign characters ($).\n", n);
    }
}

void filewrite()
{
    FILE *fptr;
    char filename[20];
    char c;
    printf("Enter the name of file:\t");
    scanf("%s", filename);
    fptr = fopen(filename, "w");

    if (fptr != NULL)
    {
        printf("\nEnter the Text. Hit enter to stop writing:\t");
        scanf("%c", &c);
        while ((c = getchar()) != '\n')
        {
            fputc(c, fptr);
        }
        fclose(fptr);
    }
    fileread(filename);
}

int main()
{
    filewrite();
    return 0;
}