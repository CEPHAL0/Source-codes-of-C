#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int choice;
    LOOP:
    printf("Select 1 for file, 2 for edit and 3 for save\n");
    printf("1==> file\n2==>Edit\n3==> Save\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nYou have chosen File Menu Item\n");
        break;
        case 2:
        printf("\nYou have chosen Edit Menu Item\n");
        break;
        case 3:
        printf("\nYou have chosen Save Menu Item\n");
        break;
        case 4:
        exit(0);
        default:
        printf("\nINVALID OPTION PLEASE TRY AGAIN\n");
        exit(0);
    }
    goto LOOP;
}