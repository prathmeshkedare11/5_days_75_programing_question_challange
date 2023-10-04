#include<stdio.h>
int main()
{ 
int n;
int count=0;   
printf("enter the number:");
scanf("%d",&n);
do{
	n/=10;
	count++;
	
}
while(n!=0);
printf("the no. of digits is %d",count);

}
