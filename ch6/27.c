#include<stdio.h>
#include<math.h>
#define MAX 1993

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
	int primes[MAX+1] = {0};
	int count = 0;
	for(int i = 2; i <= MAX; i++)
		if(is_prime(i))
			primes[++primes[0]] = i;
	for(int i = primes[0]-1; i >= 1; i--)
		for(int j = i+1; j <= primes[0]; j++)
			if(primes[j] - primes[i] == 1898)
				printf("%d:%d %d\n", ++count, primes[i], primes[j]);
	return 0;
}
