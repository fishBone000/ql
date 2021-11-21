#include<stdio.h>
#include<math.h>

short is_prime(int i){
	if(i == 2)
		return 1;
	if(!(i%2))
		return 0;
	if(i <= 1)
		return 0;

	short cont = 0;
	for(int j = 1; 2*j+1 <= sqrt(i); j++)
		if(i%(2*j+1) == 0)
			return 0;
	return 1;
}

int main(){
	int i = 1, count = 0;
	while(count < 5){
		if(is_prime(i) && is_prime( pow(2, i)-1 )){
			printf("%d\n", (int)pow(2, i)-1);
			count++;
		}
		i++;
	}
	return 0;
}
