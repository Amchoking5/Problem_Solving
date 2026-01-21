#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(b<45){
		b=b+15;
		a=a-1;
		if(a<0) a=a+24;
	}
	else b=b-45;
	printf("%d %d",a,b);
}