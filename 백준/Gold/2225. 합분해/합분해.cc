#include <stdio.h>

int a[300][300]={0};
int n,k;

int main(){
	scanf("%d %d",&n,&k);
	if(k==1){
		printf("1");
		return 0;
	}
	for(int i=0;i<=n;i++){
		a[i][1]=1;
	}
	for(int i=0;i<=n;i++){
		for(int j=2;j<=k;j++){
			for(int k=0;k<=i;k++){
				a[i][j]+=a[k][j-1];
				a[i][j]=a[i][j]%1000000000;
			}
		}
	}
	printf("%d",a[n][k]);
}