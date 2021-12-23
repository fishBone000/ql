//连接字符串

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char *append(char *str1, char *str2){
	int len1 = strlen(str1), len2 = strlen(str2);
	char *result = (char*)calloc(len1+len2-1, sizeof(char));
	memcpy(result, str1, len1);
	memcpy(result+len1, str2, len2);
	return result;
}

int main(){
	char *str1, *str2;
	scanf("%ms %ms", &str1, &str2);
	printf("%s", append(str1, str2));
	free(str1);
	free(str2);
	return 0;
}
