#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int n;
double uf[101]={0};
double stars[101][2]={0};
vector<pair<double,pair<int,int> > > node;
double total=0,totalnode=0;

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
		scanf("%lf %lf",&stars[i][0],&stars[i][1]);
		for(int j=1;j<i;j++){
			double xx,yy;
			xx=(stars[i][0]-stars[j][0])*(stars[i][0]-stars[j][0]);
			yy=(stars[i][1]-stars[j][1])*(stars[i][1]-stars[j][1]);
			double dist=sqrt(xx+yy);
			node.push_back({dist,{i,j}});
		}
	}
	
	sort(node.begin(),node.end());
	
	int now=0;
	while(now<n*(n-1)/2){
		double cost=node[now].first;
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
	
	printf("%.2lf",total);
}