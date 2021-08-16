#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    if (argc >= 2)
    {
        printf("No of arguments passed: %d\n", argc);
        for (i = 1; i < argc; i++)
        {           
            printf("argv[%d]=%s\t", i, argv[i]);
            // for (i = 0; i < argc; i++)
            // {
            //     printf("\nargv[%d]: %s", i, argv[i]);
            // }
        }
    }
    else
    {
        printf("No commandline argument is passed");
    }
    return 0;
}