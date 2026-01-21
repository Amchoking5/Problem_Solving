#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main(){
	double a;
	scanf("%lf",&a);
	printf("%lf\n%lf",a*a*M_PI,2*a*a);
}