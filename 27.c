#include<stdio.h>
#include<math.h>
int main()
{  int n,temp,reverse=0,rem; 
   printf("enter the no :");
   scanf("%d",&n);
   temp=n;
   while(n!=0)
{
	rem=n%10;
	reverse=reverse*10+rem;
	n=n/10;
}
if(temp==reverse)
{
	printf("the given no. is palidrone",temp);
	
}
else
printf("the no. is not a palidrone",temp);
}
