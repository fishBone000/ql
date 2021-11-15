#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	float res1, res2;
	if(b*b-4*a*c>=0){
		res1=(-b+sqrtf(b*b-4*a*c))/2;
		res2=(-b-sqrtf(b*b-4*a*c))/2;
		if(res1==0.0)
			res1=0.0;
		if(res2==0.0)
			res2=0.0;
		printf("实根为%.2f,%.2f", res1, res2);
	}else
		printf("无实根！");
	return 0;
}
	
