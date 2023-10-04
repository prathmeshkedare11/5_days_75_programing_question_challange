#include<stdio.h>
#include<math.h>
int main()
{ 
 int n,c,digit=0,rem;
 printf(" enter the value of n :");
 scanf("%d",&n);
 c=n;
 while(n!=0)
 {
 	rem=n%10;
 	digit=digit+rem*rem*rem;
 	n=n/10;
 	
 }
 if(c==digit)
 printf(" yesss %d",digit);
 else
 printf("noooo");
 
		
    
}

