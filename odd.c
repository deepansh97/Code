#include<stdio.h>
void main(){
	int i=0,n,q;
	printf("Enter the starting interval");
	scanf("%d",&n);
	printf("Enter endng interval");
	scanf("%d",&q);
	for(i=n;i<=q;i++){
		if(i%2==1){
		
		printf("%d ",i);}
	}
}
