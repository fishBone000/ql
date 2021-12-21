#include<stdio.h>
#define MAX 100

int main(){
	int a, b;
	int remainders[MAX+1] = {0}, digits[MAX+1] = {0};
	scanf("%d %d", &a, &b);
	printf("0.");
	while(1){
		while(a<b)
			a*=10;
		int remainder = a%b;
		for(int i = 1; i <= remainders[0]; i++)
			if(remainder == remainders[i])
				return 0;
		printf("%d", digits[++digits[0]] = a/b);
		a = remainders[++remainders[0]] = remainder;
	}
}
