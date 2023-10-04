#include<stdio.h>
#include<math.h>
int main()
{  int n,flag=0; 
   printf("enter the no :");
   scanf("%d",&n);

if(n==0||n==1) flag=1;
for(int i=2;i<=n/2;i++)
{
	if(n%i==0){
	
	flag=1;
	break;
}
}
if(flag==0)
printf("the no. is prime");
else
printf(" not");


}
