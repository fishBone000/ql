#include<stdio.h>
#include<math.h>
#define PRIME primelist[i]

int main(){
	int primelist[1000] = {1, 2};
	for(int i = 100; i < 1000; i++){
		if(!(i%2))
			continue;

		short cont = 0;
		for(int j = 1; 2*j+1 <= sqrt(i); j++)
			if(i%(2*j+1) == 0){
				cont = 1;
				break;
			}
		if(cont)
			continue;
		primelist[++primelist[0]] = i;
	}

	for(int i = 0; i <= primelist[0]; i++)
		if((PRIME%10 + PRIME/10%10)%10 == PRIME/100%10)
			printf("%d ", PRIME);
	return 0;
}
