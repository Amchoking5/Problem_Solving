#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

#define MIN(a,b) (((a)>(b))?(b):(a))
#define ABS(a) (((a)>0)?(a):((a)*(-1)))
#define INF 2000000001

using namespace std;

int n;
int uf[100004]={0};
vector<pair<int,int> > xvec;
vector<pair<int,int> > yvec;
vector<pair<int,int> > zvec;
vector<pair<int,pair<int,int> > > node;
long long int total=0;
int totalnode=0;

int find(int s1){
	if(uf[s1]==0) return s1;
	int let = find(uf[s1]);
	uf[s1]=let;
	return let;
}

void unite(int s1,int s2){
	int boss1 = find(s1);
	int boss2 = find(s2);
	if(boss1==boss2) return;
	uf[boss2]=boss1;
}

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		xvec.push_back({x,i});
		yvec.push_back({y,i});
		zvec.push_back({z,i});
	}
	
	sort(xvec.begin(),xvec.end());
	sort(yvec.begin(),yvec.end());
	sort(zvec.begin(),zvec.end());
	
	for(int i=0;i<n-1;i++){
		int p1 = xvec[i].first;
		int star1 = xvec[i].second;
		int p2 = xvec[i+1].first;
		int star2 = xvec[i+1].second;
		node.push_back({p2-p1,{star1,star2}});
	}
	
	for(int i=0;i<n-1;i++){
		int p1 = yvec[i].first;
		int star1 = yvec[i].second;
		int p2 = yvec[i+1].first;
		int star2 = yvec[i+1].second;
		node.push_back({p2-p1,{star1,star2}});
	}
	
	for(int i=0;i<n-1;i++){
		int p1 = zvec[i].first;
		int star1 = zvec[i].second;
		int p2 = zvec[i+1].first;
		int star2 = zvec[i+1].second;
		node.push_back({p2-p1,{star1,star2}});
	}
	
	sort(node.begin(),node.end());
	
	int now=0;
	while(now<node.size()){
		int cost=node[now].first;
		int p1=node[now].second.first;
		int p2=node[now].second.second;
		now++;
		
		int boss1=find(p1);
		int boss2=find(p2);
		if(boss1==boss2) continue;
		else{
			unite(p1,p2);
			total+=cost;
			totalnode++;
			if(totalnode==n-1) break;
		}
	}
	
	printf("%lld",total);
}