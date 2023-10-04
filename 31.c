#include<stdio.h>
#include<math.h>
int main()
{ 
 int n ;
 printf(" enter the  :");
 scanf("%d%d",&n1,&n2);
 for(int i=n1;i<=n2;i++)
    {
    	for(int j=2;j<=i;j++)
    	{
    		if(i%j==0)
    		break;
    	}
    		
    		
    	  if(i==j)
    		printf(" prime no.%d ",j);
		
    
}
}

