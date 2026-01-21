#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

#define INF 80000000
#define MIN(a,b) (((a)>(b))?(b):(a))

using namespace std;

int v,e,t,start,p1,p2;
vector<pair<int,int> > arr[2001];
priority_queue<int> solve;

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
	int testcase;
	int keepvalue;
	int mindis;
	scanf("%d",&testcase);
	for(int j=0;j<testcase;j++){
		scanf("%d %d %d",&v,&e,&t);
		scanf("%d %d %d",&start,&p1,&p2);
		for(int i=1;i<=v;i++){
			arr[i].clear();
		}
		int dest[t];
		for(int i=0;i<e;i++){
			int a,b,w;
			scanf("%d %d %d",&a,&b,&w);
			if((a==p1 && b==p2) || (a==p2 && b==p1)) keepvalue=w;
			arr[a].push_back({b,w});
			arr[b].push_back({a,w});
		}
		
		for(int i=0;i<t;i++){
			scanf("%d",&dest[i]);
		}
		
		vector<int> dist1 = daic(start);
		vector<int> dist2 = daic(p1);
		vector<int> dist3 = daic(p2);
		
		
		for(int i=0;i<t;i++){
			if(dist1[dest[i]]==dist1[p1]+keepvalue+dist3[dest[i]]){
				solve.push(-dest[i]);
			}
			else if(dist1[dest[i]]==dist1[p2]+keepvalue+dist2[dest[i]]){
				solve.push(-dest[i]);
			}
		}
		
		while(!solve.empty()){
			int ans;
			ans = -solve.top();
			solve.pop();
			printf("%d ",ans);
		}
		printf("\n");
	}
	
}