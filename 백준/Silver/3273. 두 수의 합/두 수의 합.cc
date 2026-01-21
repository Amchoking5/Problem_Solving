#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>

using namespace std;

int main(){
	int n,m,count=0;
	scanf("%d",&n);
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	sort(arr.begin(),arr.end());
	int i=0, j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==m){
			count++;
			j--;
		}
		else if(arr[i]+arr[j]>m){
			j--;
		}
		else if(arr[i]+arr[j]<m){
			i++;
		}
	}
	printf("%d",count);
}