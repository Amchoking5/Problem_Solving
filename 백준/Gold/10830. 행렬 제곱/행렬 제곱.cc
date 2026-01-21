#include <stdio.h>

int now[5][5]={0};
int nums[5][5]={0};
int save[5][5]={0};
int howlong[50];
int len=0;

void power(int b){
	
}

int main(){
	long long int n,b;
	scanf("%lld %lld",&n,&b);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&nums[i][j]);
			nums[i][j]=nums[i][j]%1000;
			now[i][j]=nums[i][j];
		}
	}
	b--;
	while(b!=0){
		if(b%2){
			howlong[len]=1;
		}
		b=b/2;
		len++;
	}
	
	for(int i=0;i<len;i++){
		if(howlong[i]){
			for(int j=0;j<n;j++){
				for(int k=0;k<n;k++){
					int sum=0;
					for(int l=0;l<n;l++){
						sum=(sum+(nums[j][l]*now[l][k]))%1000;
					}
					save[j][k]=sum;
				}
			}
			for(int j=0;j<n;j++){
				for(int k=0;k<n;k++){
					nums[j][k]=save[j][k];
				}
			}
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				int sum=0;
				for(int l=0;l<n;l++){
					sum=(sum+(now[j][l]*now[l][k]))%1000;
				}
				save[j][k]=sum;
			}
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				now[j][k]=save[j][k];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",nums[i][j]);
		}
		printf("\n");
	}
}