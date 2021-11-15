#include<stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	switch(c){
		case 'm':
		case 'M':
			printf("Monday");
			break;
		case 't':
		case 'T':
			scanf("%c", &c);
			switch(c){
				case 'u':
				case 'U':
					printf("Tuesday");
					break;
				case 'h':
				case 'H':
					printf("Thursday");
					break;
				default:
					printf("illegal input!");
					
			}
			break;
		case 'w':
		case 'W':
			printf("Wednesday");
			break;
		case 'F':
		case 'f':
			printf("Friday");
			break;
		case 's':
		case 'S':
				scanf("%c", &c);
				switch(c){
					case 'a':
					case 'A':
						printf("Saturday");
						break;
					case 'u':
					case 'U':
						printf("Sunday");
						break;
					default:
						printf("illegal input!");
				}
				break;
		default:
				printf("illegal input!");
	}
	return 0;
}
