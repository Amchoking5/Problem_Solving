#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

vector<int> node[100001];
vector<int> child[100001];
int count[100001]={0};
bool visit[100001]={false};
queue<int> qu;
int n,r,q;

void counter(int root){
	count[root]++;
	for(int i=0;i<child[root].size();i++){
		counter(child[root][i]);
		count[root]+=count[child[root][i]];
	}
}

int main(){
	scanf("%d %d %d",&n,&r,&q);
	for(int i=0;i<n-1;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		node[a].push_back(b);
		node[b].push_back(a);
	}
	visit[r]=true;
	qu.push(r);
	while(!qu.empty()){
		int parent = qu.front();
		qu.pop();
		
		for(int i=0;i<node[parent].size();i++){
			int now = node[parent][i];
			if(!visit[now]){
				child[parent].push_back(now);
				visit[now]=true;
				qu.push(now);
			}
		}
	}
	
	counter(r);
	
	for(int i=0;i<q;i++){
		int a;
		scanf("%d",&a);
		printf("%d\n",count[a]);
	}
	
	
}