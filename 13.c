#include<stdio.h>
int main()
{    int yr;
     printf("enter the year ");
     scanf("%d",& yr);
     if(yr%400==0)
     {
     	printf("the year is a leap year",yr);
	 }
	 else if(yr%100==0)
     printf("the year is not a leap year",yr);
     else if(yr%4==0)
     printf("the year is a leap year",yr);
     else 
     printf("the year is not a leap year",yr);
     
    
	return 0;
}
