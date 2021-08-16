//To print and scan different data types in scan and print
#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	float n1;
	char gender;
	char name[10];
	printf("Enter the integer,float,char and string:");
	scanf("%d %f %c %s", &a ,&n1 ,&gender ,name);
	printf("Integer value:%d \nFloat value:%f\nGender:%c\nName:%s",a,n1,gender,name);
	return 0;
}
