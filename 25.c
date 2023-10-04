#include<stdio.h>
int main()
{ 
int n;
int r,reverse;   
printf("enter the number:");
scanf("%d",&n);
 do{
 r=n%10;
 reverse= reverse*10+r;}
 while(n!=0);
 
 printf("the reverse is %d",r);
}
