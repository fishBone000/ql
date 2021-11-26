#include<stdio.h>
#include<ctype.h>

int main(){
	int count[52] = {0};
	char *str;
	scanf("%ms", &str);
	for(int i = 0; str[i] != '\0'; i++){
		if(islower(str[i]))
			count[str[i]-'a']++;
		if(isupper(str[i]))
			count[str[i]-'A'+26]++;
	}
	for(int i = 0; i < 52; i++)
		if(count[i])
			printf("%c:%d ", i>25?'A'+i-26:'a'+i, count[i]);
	return 0;
}
