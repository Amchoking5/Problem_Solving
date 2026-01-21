#include<stdio.h>

#define MIN(a,b) (((a)>(b))?(b):(a))

int main(){
	int n,a,b,c;
	int suma=0,sumb=0,sumc=0;
	int suma1=0,sumb1=0,sumc1=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		suma1=MIN(sumb+a,sumc+a);
		sumb1=MIN(suma+b,sumc+b);
		sumc1=MIN(suma+c,sumb+c);
		suma=suma1;
		sumb=sumb1;
		sumc=sumc1;
	}
	printf("%d",MIN(MIN(suma,sumb),sumc));
}