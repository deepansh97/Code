#include<stdio.h>
void main()
{
	int p,n,c;
	printf("Enter number");
	scanf("%d",&n);
	printf("Enter power");
	scanf("%d",&p);
	c=pow(n,p);
	printf("%d",c);
}
