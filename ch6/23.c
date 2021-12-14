#include<stdio.h>
#include<stdlib.h>
#define MAX 256

int main(){
	char *line = (char*)calloc(MAX, 1);
	int count=0;
	fgets(line, MAX, stdin);
	for(int i = 0; line[i]!='\0'; i++)
		count += line[i] == ' ';
	printf("%d", count+1);
	return 0;
}
