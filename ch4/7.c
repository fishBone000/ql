#include<stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
		printf("%d", c);
	else if( c>='0' && c<='9')
		printf("%c", c);
	else
		printf("输入错误!");
	return 0;
}
