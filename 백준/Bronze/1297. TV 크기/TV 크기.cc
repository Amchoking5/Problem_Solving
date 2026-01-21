#include <stdio.h>
#include <math.h>

int main(){
	double inch,x,y;
	scanf("%lf %lf %lf",&inch,&x,&y);
	double r = (inch*inch)/(x*x+y*y);
	r=sqrt(r);
	printf("%d %d",int(r*x),int(r*y));
}