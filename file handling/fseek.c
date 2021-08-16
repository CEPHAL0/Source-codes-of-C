#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char s[100];
    fp = fopen("file.txt", "w+");
    fputs("This is our class", fp);

    fseek(fp, 12, SEEK_SET);
    fputs("I love C programming", fp);
    printf("\nThe position is %ld\n", ftell(fp));
    rewind(fp);
    fgets(s, 100, fp);
    fclose(fp);
    puts(s);
    return 0;
}