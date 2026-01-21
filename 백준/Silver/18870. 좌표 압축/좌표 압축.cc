#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int axis[1000001];
int main_axis[1000001];
vector<int> v;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&axis[i]);
		main_axis[i]=axis[i];
	}
	sort(axis,axis+n);
	//받은 값 정렬 완료 
	int now=0;
	v.push_back(axis[now]);
	for(int i=1;i<n;i++){
		if(v[now]<axis[i]){
			now++;
			v.push_back(axis[i]);
		}
	}
	//정렬된 값들중 동일한 값 제거 완료 
	for(int i=0;i<n;i++){
		int left=0;
		int right=now;
		int mid=(left+right)/2;
		while(left<right){
			if(v[mid]>main_axis[i]){
				right=mid;
			}
			else if(v[mid]<main_axis[i]){
				left=mid+1;
			}
			else{
				break;
			}
			mid=(left+right)/2;
		}
		printf("%d ",mid);
	} 
}