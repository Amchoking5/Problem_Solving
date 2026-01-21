#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int v,e;
int uf[1001]={0};
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
	scanf("%d",&v);
	scanf("%d",&e);
	for(int i=0;i<e;i++){
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		node.push_back({w,{a,b}});
	}
	sort(node.begin(),node.end());
	
	int now=0;
	while(now<e){
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
			if(totalnode==v-1) break;
		}
	}
	printf("%lld",total);
}