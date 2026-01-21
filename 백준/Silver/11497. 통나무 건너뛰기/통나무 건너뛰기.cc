#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>

#define MAX(a,b) (((a)<(b))?(b):(a))
#define ABS(a) ((a)>(0)?(a):((a)*(-1)))

using namespace std;

int n,t,a,maxvalue=0;
vector<int> v;
vector<int> v1;
vector<int> v2;

int main(){
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		v.clear();
		v1.clear();
		v2.clear();
		maxvalue=0;
		for(int j=0;j<n;j++){
			scanf("%d",&a);
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		for(int j=0;j<n;j++){
			if(j%2){
				v1.push_back(v[j]);
				if(v1.size()>1){
					maxvalue=MAX(maxvalue,v1[v1.size()-1]-v1[v1.size()-2]);
				}
			}
			else{
				v2.push_back(v[j]);
				if(v2.size()>1){
					maxvalue=MAX(maxvalue,v2[v2.size()-1]-v2[v2.size()-2]);
				}
			}
		}
		maxvalue=MAX(maxvalue,ABS(v1[0]-v2[0]));
		maxvalue=MAX(maxvalue,ABS(v1[v1.size()-1]-v2[v2.size()-1]));
		printf("%d\n",maxvalue);
	}
}