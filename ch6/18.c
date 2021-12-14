#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 256

int main(){
	// 所以为什么它会只给我一个字符串？？
	char *line, *strA, *strB, *result;
	line = (char*)calloc(1, MAX);
	strA = fgets(line, MAX, stdin);
	for(int i = 0; line[i] != '\0'; strB=line+(++i))
		if(line[i] == ' '){
			strB++;
			line[i] = '\0';
			break;
		}

	result = (char*)calloc(1, strlen(strA)+strlen(strB)+1);
	memcpy(result, strA, strlen(strA));
	memcpy(result+strlen(strA), strB, strlen(strB));
	printf("%s", result);
	return 0;
}
