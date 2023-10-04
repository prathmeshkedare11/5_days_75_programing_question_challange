#include<stdio.h>
int main()
{
	int n,m,j;
	printf("enter the value of m:");
	scanf("%d",&m);
	printf("enter the value of n:");
	scanf("%d",&n);
for(int i=1;i<=n;i++)
{
	for(int j=i;j>=1;j--)
	{
	printf(" %d ",j);

	}
	printf("\n");
//	printf("%d",j);	
}
}
