


#include<stdio.h>
int main()
{    int t1=0;
int t2=1,nextterm;
     int n;
printf("enter value of n");
scanf("%d",&n);
 nextterm=t1+t2;

for(int i=1;i<=n;i++)
{
	printf(" %d ",t1,t2, nextterm);
	t1=t2;
	t2=nextterm;
	nextterm=t1+t2;
	
	



}
     
    
	return 0;
}
