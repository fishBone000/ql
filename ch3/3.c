#include<stdio.h>
int main(){
	char a, b;
	scanf("%c%c", &a, &b);
	printf("用putchar输出语句:");
	putchar(a);
	putchar(b);
	printf("\n用printf输出语句:%c%c", a, b);
	return 0;
}
