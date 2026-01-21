#include <stdio.h>

#define MAX(a,b) (( (a) > (b) ) ? (a) : (b))

int main(){
	int n;
	int stair[10001];
	int count[10001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&stair[i+1]);
	}
	if(n==1) printf("%d",stair[1]);
	else if(n==2) printf("%d",stair[2]+stair[1]);
	else{
		count[1]=stair[1];
		count[2]=stair[2]+stair[1];
		for(int i=3;i<n+1;i++){
			count[i]=stair[i]+MAX(count[i-2],count[i-3]+stair[i-1]);
			count[i]=MAX(count[i],count[i-1]);
		}
		printf("%d",count[n]);
	}
}