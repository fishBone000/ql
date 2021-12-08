#include<stdio.h>
#include<ctype.h>

int main(){
	char *str;
	scanf("%ms", &str);
	for(int i = 0; str[i] != '\0'; i++){
		if(isupper(str[i]))
			putchar('Z' - str[i] + 'A');
		else if(islower(str[i]))
			putchar('z' - str[i] + 'a');
		else
			putchar(str[i]);
	}
	return 0;
}
