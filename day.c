#include<stdio.h>
int main()
{
	char s[10];
	int i;
	printf("enter day");
	scanf("%c",&s);
	if(s[0]=='s' || s[0]=='S'){
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
	
}
