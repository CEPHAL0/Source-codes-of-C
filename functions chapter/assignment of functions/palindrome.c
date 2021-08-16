#include <stdio.h>
#include <string.h>
char palindrome(char p[])
{
    int l, i, j, t;
    t = 0;
    l = strlen(p);
    for (i = 0; i < l; i++)
    {
        j = l - (i + 1);
        if (p[i] == p[j])
        {
            t = t + 1;
        }
    }
    if (t == l)
    {
        return 'Y';
    }
    else
    {
        return 'N';
    }
}
int main()
{
    char s[30];
    char c;
    printf("Enter the string: ");
    scanf("%s", &s);
    c = palindrome(s);
    if (c == 'Y')
    {
        printf("Its palindrome.");
    }
    else
    {
        printf("Its not palindrome.");
    }
    return 0;
}