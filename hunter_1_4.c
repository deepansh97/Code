#include<stdio.h>

int main()
{
	int i,j,a[100],c[100],n;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		c[i]=0;
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(a[i]==a[j]){
			c[i]++;
		}
	}
	for(i=0;i<n;i++){
		if(c[i]==1){
			printf(" %d",a[i]);
		}
	}
}
