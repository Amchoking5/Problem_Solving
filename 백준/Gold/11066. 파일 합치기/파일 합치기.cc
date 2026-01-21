#include <stdio.h>

#define MIN(a,b) (((a)<(b))?(a):(b))

long long int value[500][500]={0};
long long int sum[500][500]={0};
int file[500];

int main(){
	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				value[i][j]=0;
			}
		}
		for(int j=0;j<n;j++){
			scanf("%d",&file[j]);
			sum[j][j]=file[j];
		}
		
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				sum[j][k]=sum[j][k-1]+file[k];
			}
		}
		
		for(int k=0;k<n;k++){
			for(int j=k-1;j>=0;j--){
				long long int minvalue=10000000;
				if(j+1!=k){
					minvalue+=value[j+1][k];
				}
				for(int l=0;l<k-j;l++){
					long long int check=value[j][j+l]+value[j+l+1][k];

					minvalue=MIN(minvalue,check);
				}
				value[j][k]=minvalue+sum[j][k];
			}
		}
		
		
		printf("%lld\n",value[0][n-1]);
	}
}