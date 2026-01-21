#include <stdio.h>

int main(){
	int n,m;
	scanf("%d",&n);
	int nums[n];
	int pal[n][n]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
		pal[i][i]=1;
	}
	
	for(int i=0;i<n-1;i++){
		if(nums[i]==nums[i+1]){
			pal[i][i+1]=1;
		}
		else{
			pal[i][i+1]=0;
		}
	}
	
	for(int i=2;i<n;i++){
		for(int j=0;i+j<n;j++){
			if(pal[j+1][i+j-1] && nums[j]==nums[i+j]){
				pal[j][i+j]=1;
			}
			else{
				pal[j][j+i]=0;
			}
		}
	}
	
	
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",pal[a-1][b-1]);
	}
}