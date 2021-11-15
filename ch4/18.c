#include<stdio.h>

int main(){
	char str[6];
	fgets(str, 6, stdin);
	int count;
	for(count = 0; count<5; count++)
		if(str[count] == '\0' || str[count] == '\n')
			break;
	printf("位数:%d\n每位数字为:", count);
	for(int i = 0; i < count-1; i++)
		printf("%c,", str[i]);
	printf("%c\n反序数字为:", str[count-1]);
	for(int i = count-1; i >= 0; i--)
		printf("%c", str[i]);
	return 0;
}
