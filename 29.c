#include<stdio.h>

int main()
{ 
 int n1,n2,j;
 printf(" enter the range :");
 scanf("%d%d",&n1,&n2);
 for(int i=n1;i<=n2;i++)
    {    int 
	count=0;
    	for(int j=1;j<=i;j++)
    	{
    		if(i%j==0)
    		count++;
    	}
    			
    	  if(count==2)
    		printf(" prime no.%d ",i);
		
    
    }
    return 0;
}
