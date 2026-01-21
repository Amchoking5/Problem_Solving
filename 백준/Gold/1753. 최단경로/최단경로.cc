#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>

#define INF 987654321

using namespace std;

int main(){
	int v,e,start;
	scanf("%d %d",&v,&e);
	scanf("%d",&start);
	
	int dist[v+1];
	fill(dist,dist+v+1,INF);
	
	vector<pair<int,int> > arr[v+1];
	priority_queue<pair<int,int> > pq;
	pq.push({0,start});
	dist[start]=0;
	
	for(int i=0;i<e;i++){
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		arr[a].push_back({b,w});
	}
	
	while(!pq.empty()){
		int cost=-pq.top().first;
		int here=pq.top().second;
		
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
	for(int i=1;i<=v;i++){
		if(dist[i]==INF){
			printf("INF\n");
		}
		else{
			printf("%d\n",dist[i]);
		}
	}
}