#include<stdio.h>
main()
{
	
	int a,b,c;
	
	printf("enter value of A=");
	
	scanf("%d",&a);
	
	printf("enter value of B=");
	
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;

	printf("a=%d",a);
	printf("\nb=%d",b);

	

}
