
#include<stdio.h>
int main()
{    char ch;
     printf("enter the character here:");
     scanf("%c",&ch);
     if((ch>='a'&&ch<='z')|| ( ch>='A'&&ch<='Z'))
     printf("alphabet %c ",ch);
     else
     printf("not alphabet");
     
     
     
    
	return 0;
}
