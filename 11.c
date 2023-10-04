#include<stdio.h>
int main()
{    char ch;
     printf("enter the character ");
     scanf("%C",&ch);
     if(ch=='a,e,i,o,u'||ch=='A,E,I,O,U')
     {
     	printf("the character is vowel",ch);
	 }
	 else
     printf("not a vowel",ch);
     
    
	return 0;
}
