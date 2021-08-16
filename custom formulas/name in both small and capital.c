//To print in both uppercase and lowercase characters
#include <stdio.h>
#include <conio.h>
int main()
{
	char name[15];
	printf("Enter your name");
	scanf("%[A-Z,a-z]", name);
	printf("Your name is %s", name);
	return 0;
}
