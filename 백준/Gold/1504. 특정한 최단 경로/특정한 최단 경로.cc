#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

#define INF 80000000
#define MIN(a,b) (((a)>(b))?(b):(a))

using namespace std;

int v,e,p1,p2;
vector<pair<int,int> > arr[801];

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
	scanf("%d %d",&v,&e);
	for(int i=0;i<e;i++){
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		arr[a].push_back({b,w});
		arr[b].push_back({a,w});
	}
	scanf("%d %d",&p1,&p2);
	
	vector<int> dist1 = daic(1);
	vector<int> dist2 = daic(v);
	vector<int> dist3 = daic(p1);
	
	int mindis;
	mindis = MIN(dist1[p1]+dist3[p2]+dist2[p2],dist1[p2]+dist3[p2]+dist2[p1]);
	
	if(mindis>=INF) printf("-1");
	else printf("%d",mindis);
	
}