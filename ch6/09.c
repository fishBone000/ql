#include<stdio.h>
#include<ctype.h>

int main(){
	unsigned char line[80] = {0};
	int upper, lower, chinese, digit, space, others;
	upper=lower=chinese=digit=space=others=0;
	for(int i = 0; i < 3; i++){
		fgets((char*)line, 80, stdin);
		for(int j = 0; line[j] != '\0' && line[j] != '\n'; j++){
			if(isupper(line[j]))
				upper++;
			else if(islower(line[j]))
				lower++;
			else if(isdigit(line[j]))
				digit++;
			else if(isspace(line[j]))
				space++;
			else if(line[j] > 128)
				chinese++;
			else
				others++;
		}
	}
	printf("upper:%d\nlower:%d\nchinese:%d\ndigit:%d\nspace:%d\nothers:%d\n", upper, lower, chinese/2, digit, space, others);
	// IDIOT QINGLINE!!!!!!!!
	return 0;
}
