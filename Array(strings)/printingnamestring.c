#include <stdio.h>
int main(void)
{
   char name[20], ch;
   int i,j;
   i=0;
   printf("Enter name: ");
       while (ch!='\n')
       {
           ch=getchar();
           name[i]=ch;
           i++;
       }
    name[i]='\0';   
    printf("your name is: %s", name);   
}
