#include <stdio.h>
int facto[1001][1001]={0};
int main(){
	int n,m;
	
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n+1;i++){
		facto[i][0]=1;
		facto[0][i]=1;
	}
	
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
			if(i==0 || j==0){
				continue;
			}
			facto[i][j]=(facto[i-1][j]+facto[i][j-1])%10007;
		}
	}
	printf("%d",facto[n-m][m]);
}