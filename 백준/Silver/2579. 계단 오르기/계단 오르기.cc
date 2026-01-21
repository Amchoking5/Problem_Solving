#include <stdio.h>

#define MAX(a,b) (( (a) > (b) ) ? (a) : (b))

int main(){
	int n;
	int stair[301];
	int count[301][3]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&stair[i+1]);
	}
	if(n==1) printf("%d",stair[1]);
	else if(n==2) printf("%d",stair[2]+stair[1]);
	else{
		count[1][1]=stair[1];
		count[2][1]=stair[2];
		count[2][2]=stair[1]+stair[2];
		for(int i=3;i<n+1;i++){
			count[i][1]=stair[i]+MAX(count[i-2][1],count[i-2][2]);
			count[i][2]=stair[i]+count[i-1][1];
		}
		printf("%d",MAX(count[n][1],count[n][2]));
	}
}