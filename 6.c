#include<stdio.h>
int main()
{
   	int integer;
	float Float;
	double Double;
	char ch;  
	printf(" the size is %zu bytes \n",sizeof(integer));
		printf(" the size is %zu bytes\n ",sizeof(Float));
			printf(" the size is %zu bytes \n",sizeof(Double));
				printf(" the size is %zu bytes ",sizeof(ch));
	
	return 0;
}
