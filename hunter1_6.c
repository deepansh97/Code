#include<stdio.h>
int main()
{
	int a[100],i,j,n,index,e;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	index=-1;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			printf("%d",a[i]);
			exit(0);
		}
	}
	if(i==n-2){
		printf("unique");
	}
	return 0;
}
