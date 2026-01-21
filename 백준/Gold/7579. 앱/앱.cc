#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int n,m,check=0;
int memory[100]={0};
int cost[100]={0};
int candm[10001]={0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&memory[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&cost[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=10000;j>=cost[i];j--){
			candm[j]=MAX(candm[j],candm[j-cost[i]]+memory[i]);
		}
	}
	
	for(int i=0;i<10001;i++){
		if(m<=candm[i]){
			check=i;
			break;
		}
	}
	printf("%d",check);
}