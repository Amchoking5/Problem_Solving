#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int main(){
	int a,b,c,max=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c){
		printf("%d",10000+1000*a);
	}
	else if(a==b || b==c){
		printf("%d",1000+b*100);
	}
	else if(a==c){
		printf("%d",1000+a*100);
	}
	else{
		max=MAX(a,b);
		max=MAX(max,c);
		printf("%d",100*max);
	}
}
