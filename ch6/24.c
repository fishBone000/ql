#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char **str;
	str = (char**)calloc(3, sizeof(char*));
	int index=0, len[3] = {0};;
	scanf("%ms %ms %ms", str, str+1, str+2);
	for(int i = 0; i < 3; i++)
		len[i] = strlen(str[i]);
	for(int i = 0; i < 3; i++)
		if(len[i] > len[index])
			index = i;

	printf("%s", str[index]);
	return 0;
}
