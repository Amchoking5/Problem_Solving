#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int g,p,gi;
bool check=false;
vector<int> v;

int main(){
	int count=0;
	scanf("%d",&g);
	for(int i=0;i<=g;i++){
		v.push_back(i);
	}
	scanf("%d",&p);
	for(int i=0;i<p;i++){
		scanf("%d",&gi);
		if(check) continue;
		int left,right,mid;
		left=0;
		right=v.size()-1;
		mid=(right+left)/2;
		while(left<right){
			if(gi<v[mid]){
				right=mid;
			}
			else if(gi==v[mid]){
				break;
			}
			else{
				left=mid+1;
			}
			mid=(left+right)/2;
		}
		if(gi>v[v.size()-1] || v[mid]==gi) mid++;
		if(v[mid-1]==0 || v[mid-1]>gi){
			check=true;
		}
		else{
			count++;
			v.erase(v.begin()+mid-1);
		}
	}
	printf("%d",count);
}