#include<stdio.h>

int main(){
	int n,k,coin;
	scanf("%d %d",&n,&k);
	int count[k+1]={0};
	count[0]=1;
	for(int i=0;i<n;i++){
		scanf("%d",&coin);
		for(int j=1;j<k+1;j++){
			if(j-coin>=0){
				count[j]=count[j]+count[j-coin];
			}
		}
	}
	printf("%d",count[k]);
} 