#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

#define INF 80000000
#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int v,e,p1,p2;
vector<pair<int,int> > arr[100001];

vector<int> daic(int start){
	priority_queue<pair<int,int> > pq;
	vector<int> dist(v+1);
	fill(dist.begin(),dist.end(),INF);
	
	dist[start]=0;
	pq.push({0,start});
	
	while(!pq.empty()){
		int cost = -pq.top().first;
		int here = pq.top().second;
		pq.pop();
		for(int i=0;i<arr[here].size();i++){
			int next = arr[here][i].first;
			int nextcost = arr[here][i].second;
			if(dist[next]>dist[here]+nextcost){
				dist[next]=dist[here]+nextcost;
				pq.push({-dist[next],next});
			}
		}
	}
	
	return dist;
	
}

int main(){
	scanf("%d",&v);
	for(int i=0;i<v;i++){
		int a,b=0,w;
		scanf("%d",&a);
		while(1){
			scanf("%d",&b);
			if(b==(-1)) break;
			scanf("%d",&w);
			arr[a].push_back({b,w});
		}
	}
	
	vector<int> dist1 = daic(1);
	
	int maxdis=0,index;
	for(int i=1;i<=v;i++){
		if(maxdis<dist1[i]){
			maxdis=dist1[i];
			index=i;
		}
	}
	
	vector<int> dist2 = daic(index);
	
	maxdis=0;
	for(int i=1;i<=v;i++){
		if(maxdis<dist2[i]){
			maxdis=dist2[i];
		}
	}
	
	printf("%d",maxdis);
	
}