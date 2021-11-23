#include<stdio.h>

int main(){
	int posis = 0, zeros = 0, negas = 0, in;
	for(int i = 0; i < 10; i++){
		scanf("%d", &in);
		if(in < 0)
			negas++;
		else if(in == 0)
			zeros++;
		else
			posis++;
	}
	printf("%d %d %d", posis, negas, zeros);
	return 0;
}
