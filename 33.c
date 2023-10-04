#include<stdio.h>
int main()
{   int n1,n2;
    char op;
	printf("enter the operator:(+,-,*,%,/) : ");
	scanf("%c",&op);
	printf("enter the first no. and second no. ");
	scanf("%d%d",&n1,&n2);
	
	switch(op)
	{
		case '+':
			printf("the addition of %d and %d is %d",n1,n2,(n1+n2));
			break ;
		case '-':
			printf(" the subtraction of %d and %d is %d",n1,n2,(n1-n2));
			break;
		case '*':
			printf(" the multiplication of %d and %d is %d",n1,n2,(n1*n2));
			break;
		case '%':
			printf(" the modules of %d and %d is %d",n1,n2,(n1%n2));
			break;
		case '/':
			printf(" the division  of %d and %d is %d",n1,n2,(n1/n2));
			break;
		default :
			printf(" enter proper values ");
		
	}
	return 0;
}
