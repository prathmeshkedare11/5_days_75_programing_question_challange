#include<stdio.h>
int main()
{    int a,b,gcd,lcm;
     printf("enter the value of a , b:");
     scanf("%d%d",&a,&b);
     for(int i=1;i<a && i<b ;i++)
     {
     	if(a%i==0 && b%i==0)
		 {
     		gcd=i;
	    }
	    lcm=a*b/gcd;
		
 }
  printf("the lcm is %d ",lcm);
    
	return 0;
}
