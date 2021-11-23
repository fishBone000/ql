#include<stdio.h>

int main(){
	int in;
	scanf("%d", &in);
	printf("%d=", in);
	short frst_time = 1;
	for(int i = 2; i <= in; i++)
		if(in%i == 0){
			if(frst_time)
				frst_time = 0;
			else
				putchar('*');
			printf("%d", i);
			in /= i;
			i = 1;
		}
	return 0;
}
