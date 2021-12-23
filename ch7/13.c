//将一个字符串中的元音字母复制到另一个字符串
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void func_your_ass_its_not_practical_at_ALL(char *line){
	char *result = (char*)calloc(strlen(line)+2, sizeof(char));
	for(int i = 0; line[i] != '\0'; i++)
		switch(line[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				result[++result[0]] = line[i];
				putchar(result[result[0]]);
				break;
		}
	return;
}

int main(){
	char *line;
	scanf("%ms", &line);
	func_your_ass_its_not_practical_at_ALL(line);
	return 0;
}
