#include <stdio.h>

int main(){
	int n,m,k;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	scanf("%d %d",&m,&k);
	int b[m][k];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	int result[n][k];
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			int sum=0;
			for(int im=0;im<m;im++){
				sum+=(a[i][im]*b[im][j]);
			}
			result[i][j]=sum;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
}