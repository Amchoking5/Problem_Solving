#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

#define INF 80000000
#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int v,p1,p2;
vector<pair<int,int> > arr[10001];

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
	for(int i=0;i<v-1;i++){
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		arr[a].push_back({b,w});
		arr[b].push_back({a,w});
	}
	
	if(v==1){
		printf("0");
		return 0;
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