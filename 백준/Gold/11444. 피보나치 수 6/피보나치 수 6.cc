#include <stdio.h>

long long int now[2][2]={{0,1},{1,1}};
long long int nums[2][2]={{0,1},{1,1}};
long long int save[2][2]={0};
int howlong[100];
int len=0;

int n=2;

void power(int b){
	
}

int main(){
	long long int b;
	scanf("%lld",&b);
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
						sum=(sum+(nums[j][l]*now[l][k]))%1000000007;
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
					sum=(sum+(now[j][l]*now[l][k]))%1000000007;
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
	printf("%lld",nums[0][1]);
}