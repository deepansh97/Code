#include<stdio.h>
void main()
{
	int c,n,i;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		printf("The number is prime");
	}
	else{
		printf("the number is not prime");
	}
}
