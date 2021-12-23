//字符反序输出 

#include<stdio.h>
#define MAX 1024

void reverse(char *str){
	int length = -1;
	while(str[length+1] != '\0')
		length++;
	for(int i = 0; length-i>i; i++){
		char temp = str[i];
		str[i] = str[length-i];
		str[length-i] = temp;
	}
	return;
}

int main(){
	char line[MAX] = {0};
	fgets(line, MAX, stdin);
	reverse(line);
	printf("%s", line);
	return 0;
}
