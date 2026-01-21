#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(){
	int n,k,a;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	printf("%d",v[k-1]);
}