#include<stdio.h>
#include<math.h>
#define PRIME primelist[i]

int main(){
	int primelist[200] = {1, 2};
	for(int i = 3; i < 201; i++){
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

	for(int i = 1; i <= primelist[0]; i++)
		printf("%d ", primelist[i]);
	return 0;
}
