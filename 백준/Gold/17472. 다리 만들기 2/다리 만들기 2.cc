#include <stdio.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

int n,m;
int island[11][11]={0};
int uf[10]={0};
vector<pair<int,pair<int,int> > > node;
int total=0;
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

void bfs(int i,int j,int c){
	queue<pair<int,int> > qu;
	qu.push({i,j});
	island[i][j]=c;
	
	while(!qu.empty()){
		int x = qu.front().first;
		int y = qu.front().second;
		qu.pop();
		
		if(x>0){
			if(island[x-1][y]==1){
				qu.push({x-1,y});
				island[x-1][y]=c;
			}
		}
		
		if(y>0){
			if(island[x][y-1]==1){
				qu.push({x,y-1});
				island[x][y-1]=c;
			}
		}
		
		if(x<n-1){
			if(island[x+1][y]==1){
				qu.push({x+1,y});
				island[x+1][y]=c;
			}
		}
		
		if(y<m-1){
			if(island[x][y+1]==1){
				qu.push({x,y+1});
				island[x][y+1]=c;
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&island[i][j]);
		}
	}
	
	int color=2;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(island[i][j]==1){
				bfs(i,j,color);
				color++;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		int dist=0;
		int p1=0;
		for(int j=0;j<m;j++){
			if(island[i][j]!=0){
				if(p1!=0 && p1!=island[i][j]){
					node.push_back({dist,{p1,island[i][j]}});
				}
				p1=island[i][j];
				dist=0;
			}
			else{
				dist++;
			}
		}
	}
	
	for(int j=0;j<m;j++){
		int dist=0;
		int p1=0;
		for(int i=0;i<n;i++){
			if(island[i][j]!=0){
				if(p1!=0 && p1!=island[i][j]){
					node.push_back({dist,{p1,island[i][j]}});
				}
				p1=island[i][j];
				dist=0;
			}
			else{
				dist++;
			}
		}
	}
	
	sort(node.begin(),node.end());
	
	int now=0;
	while(now<node.size()){
		int cost=node[now].first;
		int p1=node[now].second.first;
		int p2=node[now].second.second;
		now++;
		if(cost==1) continue;
		
		int boss1=find(p1);
		int boss2=find(p2);
		if(boss1==boss2) continue;
		else{
			unite(p1,p2);
			total+=cost;
			totalnode++;
			if(totalnode==color-3) break;
		}
	}
	
	if(totalnode<color-3) printf("-1");
	else printf("%d",total);

	
}