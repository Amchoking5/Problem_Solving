#include <stdio.h>

#define MIN(a,b) (((a)>(b))?(b):(a))

int main(){
	int a,b,c,d,e;
	int n,m;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	n=a*e;
	if(c>=e){
		m=b;
	}
	else{
		m=b+(e-c)*d;
	}
	printf("%d",MIN(n,m));
}