#include<math.h>
#include<stdio.h>
int main(){
	float poisonpercan = 0.35, poisonneeded=0;
	scanf("%f", &poisonneeded);
	poisonneeded=poisonneeded*1000/7;
	printf("喝%d罐汽水可杀死你！", (int)(poisonneeded/poisonpercan));
	return 0;
}
