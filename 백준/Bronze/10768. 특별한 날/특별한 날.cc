#include <stdio.h>

int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<2){
		printf("Before");
	}
	else if(a>2){
		printf("After");
	}
	else{
		if(b<18){
			printf("Before");
		}
		else if(b>18){
			printf("After");
		}
		else{
			printf("Special");
		}
	}
	
}