#include <stdio.h>
#include <string.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<100000;i++){
		if(a==1){
			printf("1");
			break;
		}
		else if(3*i*(i-1)+1<a && 3*(i+1)*i+1>=a){
			printf("%d",i+1);
			break;	
		}
	}
}