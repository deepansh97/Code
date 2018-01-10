#include<stdio.h>
void main(){
	int i,a[50],n,k,sum=0;
	printf("Enter value of n");
	scanf("%d",&n);
	printf("Enter values in array");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	printf("Enter the value of k");
	scanf("%d",&k);
	for(i=0;i<k;i++){
		sum+=a[i];
	}
	printf("%d",sum);
}
