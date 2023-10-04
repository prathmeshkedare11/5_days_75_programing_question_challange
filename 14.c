#include<math.h>
#include<stdio.h>
int main()
{
	double a,b,c,disc,r1,r2,real,imag;
	printf("enter the value for a,b and c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	disc = b * b - 4* a * c;
	
	if(disc>0){
		r1=( -b + sqrt(disc))/(2*a);
		r1=( -b - sqrt(disc))/(2*a);
		printf(" the root1 will be :%lf and root2 will be :%lf ",r1,r2);
	}
	else if(disc==0){
		r1=r2=-b/(2*a);
		printf("root1=root2=%lf",r1);
	}
	else
	{
		real = -b / (2 * a);
        imag = sqrt(-disc) / (2 * a);
        printf("root1 = %lf+%lfi and root2 = %f-%fi", real, imag,real, imag);
	}
}
