#include <stdio.h>

int main(){
	int n;
	long long int sum=0;
	long long int nums[101][10]={0};
	
	for(int i=1;i<10;i++){
		nums[0][i]=1;
	}
	
	scanf("%d",&n);
	
	if(n==1) printf("9");
	else{
		for(int i=1;i<n;i++){
			nums[i][0]=nums[i-1][1];
			nums[i][1]=(nums[i-1][0]+nums[i-1][2])%1000000000;
			nums[i][2]=(nums[i-1][1]+nums[i-1][3])%1000000000;
			nums[i][3]=(nums[i-1][2]+nums[i-1][4])%1000000000;
			nums[i][4]=(nums[i-1][3]+nums[i-1][5])%1000000000;
			nums[i][5]=(nums[i-1][4]+nums[i-1][6])%1000000000;
			nums[i][6]=(nums[i-1][5]+nums[i-1][7])%1000000000;
			nums[i][7]=(nums[i-1][6]+nums[i-1][8])%1000000000;
			nums[i][8]=(nums[i-1][7]+nums[i-1][9])%1000000000;
			nums[i][9]=nums[i-1][8];
		}
		for(int i=0;i<10;i++){
			sum=(sum+nums[n-1][i])%1000000000;
		}
		printf("%lld",sum);
	}
}