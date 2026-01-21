#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

int land[501][501];
int m,n,b;
int maxh=0;
int minh=300;


int main(){
	scanf("%d %d %d",&n,&m,&b);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&land[i][j]);
			maxh=MAX(maxh,land[i][j]);
			minh=MIN(minh,land[i][j]);
		}
	}
	long long int mintime=999999999999999999;
	long long int h=0;
	for(int i=minh;i<=maxh;i++){
		long long int time=0;
		long long int block=b;
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				if(land[j][k]>i){
					time+=((land[j][k]-i)*2);
					block+=(land[j][k]-i);
				}
				else{
					time+=(i-land[j][k]);
					block-=(i-land[j][k]);
				}
			}
		}
		
		if(block>=0){
			if(mintime>=time){
				mintime=time;
				h=i;
			}
		}
		
	}
	
	printf("%d %d",mintime,h);
	
}