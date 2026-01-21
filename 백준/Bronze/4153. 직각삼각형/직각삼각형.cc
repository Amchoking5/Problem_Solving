#include <stdio.h>

int main(){
	long a,b,c,d;
	while(1){
		scanf("%ld %ld %ld",&a,&b,&c);
		if(a==0 && b==0 && c==0) break;
		if(a>b){
			d=a;
			a=b;
			b=d;
		}
		if(b>c){
			d=b;
			b=c;
			c=d;
		}
		if(a>b){
			d=a;
			a=b;
			b=d;
		}
		if(c*c==a*a+b*b) printf("right\n");
		else printf("wrong\n");
	}
}