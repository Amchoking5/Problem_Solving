#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;

vector<int> p1;
vector<int> p2;

vector<int> arr;
int n,m;

void p1values(long long int sum,int now,int end){
	if (now<=end){
		if(now==end){
			if(sum+arr[end]<=m) p1.push_back(sum+arr[end]);
			p1.push_back(sum);
		}
		else{
			p1values(sum,now+1,end);
			if(sum+arr[now]<=m) p1values(sum+arr[now],now+1,end);
		}
	}
	return;
}

void p2values(long long int sum,int now,int end){
	if (now<=end){
		if(now==end){
			if(sum+arr[end]<=m) p2.push_back((sum+arr[end]));
			p2.push_back(sum);
		}
		else{
			p2values(sum,now+1,end);
			if(sum+arr[now]<=m) p2values(sum+arr[now],now+1,end);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		arr.push_back(k);
	}
	
	sort(arr.begin(),arr.end());
	
	if(n==1) p1.push_back(0);
	
	p1values(0,0,n/2-1);
	p2values(0,n/2,n-1);
	
	sort(p1.begin(),p1.end());
	sort(p2.begin(),p2.end());
	
	int i=0, j=p2.size()-1;
	long long int count=0;
	while(i<p1.size() && j>=0){
		if(p1[i]+p2[j]<=m){
			count+=(j+1);
			i++;
		}
		else{
			j--;
		}
		
	}
	printf("%lld",count);
}