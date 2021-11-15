#include<stdio.h>
#include<stdlib.h>

int main(){
	char *str;
	int nega = 0; // qingline的编译器连bool都没有，真就gnu时代还要学unix系列呗
	int integer=0, decimal=0;
	scanf("%ms", &str);
	if(str[0] == '-'){
		nega = 1;
		str++;
	}
	sscanf(str, "%d.%d", &integer, &decimal);
	free(nega?str-1:str);
	printf("sign:%c\nintegral part:%d\ndecimal fraction part:0.%d", nega?'-':'+', integer, decimal);
	int i;
	for(i = 0; decimal > 0; i++)
		decimal /= 10;
	if(!i)
		i=1;
	for(int j = 6-i; j > 0; j--){
		putchar('0');
	}
	return 0;
}
