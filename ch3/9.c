#include<stdio.h>
int main(){
	long int mins=0;
	scanf("%ld", &mins);
	printf("%ld年", mins/365/24/60);
	mins %= 365*24*60;
	if(mins%(24*60)>0)
		printf("%ld天", mins/(24*60)+1);
	else
		printf("%ld天", mins/(24*60));
	return 0;
}
