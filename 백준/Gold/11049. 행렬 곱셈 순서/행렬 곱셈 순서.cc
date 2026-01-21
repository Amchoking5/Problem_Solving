#include <stdio.h>

#define MIN(a,b) (((a)<(b))?(a):(b))

long long int sum[500][500]={0};
long long int matrix[500][500][2]={0};
long long int check=0;

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&matrix[i][i][0],&matrix[i][i][1]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			matrix[i][j][0]=matrix[i][i][0];
			matrix[i][j][1]=matrix[j][j][1];
		}
	}
	
	
	for(int j=0;j<n;j++){
		for(int i=j-1;i>=0;i--){
			long long int minvalue=2147483647;
			for(int k=0;k<j-i;k++){
				check=sum[i][i+k]+sum[i+k+1][j]+(matrix[i][i][0]*matrix[i+k][i+k][1]*matrix[j][j][1]);
				minvalue=MIN(minvalue,check);
			}
			sum[i][j]=minvalue;
		}
	}
	

	
	printf("%lld",sum[0][n-1]);

}