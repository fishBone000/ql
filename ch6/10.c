#include<stdio.h>
#include<stdlib.h>

int main(){
	char **str;
	str = (char**)malloc(2*sizeof(char*));
	scanf("%ms %ms", str, str+1);
	for(int i = 1; i >= 0; i--){
		for(int j = 0; str[i][j] != '\0'; j++){
			if(str[i][j] == '.' || str[i][j] == ',')
				break;
			else
				putchar(str[i][j]);
		}
		if(i == 1)
			putchar(' ');
			putchar(' ');
	}
	free(str);
	return 0;
}
