#include<stdio.h>
int main(){
	int number,o,rv=0,rem;
	printf("Enter number");
	scanf("%d",&number);
	o=number;
	while(number!=0){
		rem=number%10;
		rv=rv*10+rem;
		number/=10;
		
	}
	if(o==rv){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
	
