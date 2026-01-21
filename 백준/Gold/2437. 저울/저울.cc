#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int nums[1001];
int n;
long long int sum=0;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	sort(nums,nums+n);
	//오름차순 정렬
	int now=0; 
	while(sum+1>=nums[now]){
		sum+=nums[now];
		now++;
		if(now==n) break;
	}
	printf("%lld",sum+1);
}