#include<stdio.h>
int main(){
	int trash,num;
	scanf("%d-%d-", &trash, &num);
	switch(num){
		case 0:
		case 1:
			printf("English Region");
			break;
		case 2:
			printf("French Region");
			break;
		case 4:
			printf("Japan");
			break;
		case 7:
			printf("China");
			break;
		case 89:
			printf("South Korea");
			break;
		case 962:
		case 988:
			printf("Hong Kong");
			break;
		case 956:
		case 957:
			printf("Taiwan");
			break;
		default:
			printf("Rubbish Qingline");
			break;
	}
	return 0;
}
