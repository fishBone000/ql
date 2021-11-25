#include<stdio.h>

short A, B, C;

short matchAB(){
	switch(A){
		case 2:
			return 1;
		case 0:
			return B==0;
		case 1:
			return B!=0;
		default:
			fprintf(stderr, "Ooops,BUG!");
			return 0;
	}
}

short matchCB(){
	switch(C){
		case 2:
			return 1;
		case 0:
			return B==1;
		case 1:
			return B!=1;
		default:
			fprintf(stderr, "Ooops,BUG!");
			return 0;
	}
}

short matchBB(){
	switch(B){
		case 2:
			return 1;
		case 0:
			return B==2;
		case 1:
			return B!=2;
		default:
			fprintf(stderr, "Ooops,BUG!");
			return 0;
	}
}

int main(){
	for(A = 0; A < 3; A++)
		for(B = 0; B < 3; B++)
			for(C = 0; C < 3; C++)
				if(A!=B && B!=C && A!=C && matchAB() && matchBB() && matchCB())
					printf("%d %d %d\n", A, B, C);
}
