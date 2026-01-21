#include <stdio.h>

int main(){
	int a,b,count=1;
	scanf("%d %d",&a,&b);
	while(a!=b){
		if(a>b){
			count=-1;
			break;
		}
		else if(b%2==0){
			b=b/2;
			count++;
		}
		else if(b%10==1){
			b=b/10;
			count++;
		}
		else{
			count=-1;
			break;
		}
	}
	printf("%d",count);
}