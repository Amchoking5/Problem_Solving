#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int nums[10001];
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
	while(nums[now]<1 && now<n){
		int num1,num2;
		num1=nums[now];
		if(now+1<n){
			if(nums[now+1]>=1){
				sum=sum+num1;
				now++;
				break;
			}
		}
		else{
			sum=sum+num1;
			now++;
			break;
		}
		num2=nums[now+1];
		sum=sum+(num1*num2);
		now=now+2;
	}
	while(nums[now]==1 && now<n){
		sum++;
		now++;
	}
	if((n-now)%2 && now<n){
		sum=sum+nums[now];
		now++;
	}
	for(int i=now;i<n;i=i+2){
		sum=sum+(nums[i]*nums[i+1]);
	}
	printf("%lld",sum);
}