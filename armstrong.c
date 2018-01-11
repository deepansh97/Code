#include<stdio.h>
int main(){
	int n,i,r,result=0,o;
	printf("Enter number");
	scanf("%d",&n);
	o=n;
	while(o!=0){
		r=o%10;
		result+=r*r*r;
		o/=10;
	}
	if(result==n){
		printf("%d is a Armstrong number",n);
	}
	else{
		printf("%d is not a armstrong number",n);
	}
	return 0;
}
