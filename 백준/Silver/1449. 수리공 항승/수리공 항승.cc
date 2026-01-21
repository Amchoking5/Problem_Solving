#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	int n,l,now=0,count=0;
	int arr[1001];
	scanf("%d %d",&n,&l);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(now<arr[i]){
			now=arr[i]+l-1;
			count++;
		}
	}
	printf("%d",count);
}