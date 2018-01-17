#include<stdio.h>
void main()
{
	int n,a[100],j,sum=0,i=0;
	printf("Enter number");
	scanf("%d",&n);
	while(n>0)
	{
		j=n%10;
		a[i]=j;
		n=n/10;
		i++;
	}
	for(j=0;j<i;j++)
	{
		sum=sum+(a[j]*a[j]);
	}
	printf("%d",sum);
}
