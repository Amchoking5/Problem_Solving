#include <stdio.h>
#include <vector>

#define INF 987654321

using namespace std;

vector<pair<pair<int, int>, int> > edge;

int main(){
	int v,e;
	scanf("%d %d",&v,&e);
	long long int dist[v+1];
	dist[1]=0;
	for(int i=2;i<=v;i++){
		dist[i]=INF;
	}
	
	for(int i=0;i<e;i++){
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		edge.push_back(make_pair(make_pair(a,b),w));
	}
	
	bool change;
	for(int i=1;i<=v;i++){
		change = false;
		for(int j=0;j<edge.size();j++){
			int from = edge[j].first.first;
			int to = edge[j].first.second;
			int cost = edge[j].second;
			
			if(dist[from]==INF) continue;
			
			if(dist[to]>dist[from]+cost){
				dist[to]=dist[from]+cost;
				change=true;
			}
		}
		
		if(!change) break;
	}
	
	if(change) printf("-1");
	else{
		for(int i=2;i<=v;i++){
			if(dist[i]>87654321) printf("-1\n");
			else printf("%lld\n",dist[i]);
		}
	}
}