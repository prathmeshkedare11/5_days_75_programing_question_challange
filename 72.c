#include<stdio.h>
int main()
{
	int n,m,j;
	printf("enter the value of m:");
	scanf("%d",&m);
	printf("enter the value of n:");
	scanf("%d",&n);
for(int i=n;i>=1;i--)
{
	for(int j=1;j<=i;j++)
	{
	printf("*");

	}
	printf("\n");
//	printf("%d",j);	
}
}
