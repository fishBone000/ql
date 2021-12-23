//拆分数字

#include<stdio.h>

int main(){
	char *line;
	scanf("%ms", &line);
	for(int i = 0; line[i]!='\0'; i++){
		putchar(line[i]);
		if(i%2)
			putchar(' ');
	}
	return 0;
}
