#include <stdio.h>
void main()
{
	int n1=60, n2=15, AND, OR, XOR, XNOR, XNOR2, n3,n4;
	AND= n1&n2;
	OR= n1|n2;
	XOR= n1^n2;
	XNOR= !(n1^n2);
	XNOR2= ~(n1^n2);
	n3=~ n1;
	n4=~ n1+1;
	
	printf("AND=%d\n", AND);
	printf("OR=%d\n", OR);
	printf("XOR=%d\n", XOR);
	printf("1s complement%d\n", n3);
	printf("2s complement%d\n", n4);
	printf("\n%d", XNOR);
	printf("\n%d", XNOR2);	
}




