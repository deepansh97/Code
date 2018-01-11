#include<stdio.h>
int main(){
	int i,n,fact;
	printf("Enter number");
	scanf("%d",&n);
	if(n<=20){
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
		printf("%d",fact);
	}
	else{
		printf("Enter number below 20");
	}
}
