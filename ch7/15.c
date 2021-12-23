//识别最长字符串

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1024

int main(){
	char *line = (char*)calloc(MAX, sizeof(char));
	fgets(line, MAX, stdin);
	for(int i = 0; line[i] != '\0'; i++)
		if(line[i] == ' ')
			line[i] = '\0';
	char *p = line, *i = p;
	int max = strlen(p);
	while(*i != '\0'){
		if(strlen(i) > max){
			p = i;
			max = strlen(i);
		}
		i += strlen(i)+1;
	}
	printf("%s", p);
	return 0;
}
