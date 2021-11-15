#include<stdio.h>
#include<math.h>
// qingline的math.h好像有点老
# define M_PI		3.14159265358979323846	/* pi */

int main(){
	float x=0, y=0;
	scanf("%f %f", &x, &y);
	printf("sin(x):%f\ncos(x):%f\n|x|:%f\ne的x次方:%f\nx的y次方:%f", sinf(M_PI/180*x), cosf(M_PI/180*x), fabs(x), expf(x), powf(x, y));
	return 0;
}
