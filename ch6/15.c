#include<stdio.h>

int main(){
	int count, max=0, j=0;
	scanf("%d", &count);
	int coords[count][2];
	for(int i = 0; i < count; i++){
		scanf("%d %d", coords[i], coords[i]+1);
		if(coords[i][0]*coords[i][0] + coords[i][1]*coords[i][1] > max){
			max = coords[i][0]*coords[i][0] + coords[i][1]*coords[i][1];
			j=i;
		}
	}
	printf("%d.00,%d.00", coords[j][0], coords[j][1]);
	return 0;
}
