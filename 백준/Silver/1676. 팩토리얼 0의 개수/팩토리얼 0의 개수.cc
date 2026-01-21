#include <stdio.h>

int main(){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++){
		if(i%125==0) sum+=3;
		else if(i%25==0) sum+=2;
		else if(i%5==0) sum++;
	}
	printf("%d",sum);
}