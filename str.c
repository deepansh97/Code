#include<stdio.h>
#include<string.h>
void main(){
	char arr[100];
	printf("Enter string to reverse");
	gets(arr);
	strrev(arr);
	printf("%s",arr);
}
