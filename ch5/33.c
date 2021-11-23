#include<stdio.h>
#include<math.h>

short is_cmpl_sqr(int value){
	float _sqrt = sqrt(value);
	if(_sqrt - (int)_sqrt)
		return 0;
	return 1;
}
int main(){
	for(int i = 0; i <= 100000; i++)
		if(is_cmpl_sqr(i+100) && is_cmpl_sqr(i+268))
			printf("%d\n", i);
	return 0;
}
