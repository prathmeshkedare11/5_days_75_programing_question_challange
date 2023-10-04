#include<stdio.h>
int main()
{    int product=1;
     int n;
printf("enter the value of n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
	product*=i;
}
printf("the product of natural no. are: %d",product);
     
    
	return 0;
}
