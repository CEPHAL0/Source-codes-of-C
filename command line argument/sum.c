#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i;
    int sum = 0;
    printf("Name of file: %s\n", argv[0]);
    if (argc >= 2)
    {
        for (i = 1; i < argc; i++)
        {
            printf("\targv[%d]=%s", i, argv[i]);
            sum += atoi(argv[i]);
        }
        printf("\nThe sum is %d", sum);
    }
    else
        printf("No commandline argument is passed");
    return 0;
}