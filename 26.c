#include<stdio.h>
#include<math.h>
int main()
{   int n,expo,result;
	printf("enter the number and exponential:");
	scanf("%d%d",&n,&expo);
	result=pow(n,expo);
	printf("the %d to the power %d is :%d",n,expo,result);
}
