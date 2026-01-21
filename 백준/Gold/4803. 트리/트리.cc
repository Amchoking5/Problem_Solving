#include<stdio.h>
#include<queue>
#include<vector>

using namespace std;

vector<int> arr[501];
bool visit[501]={false,};
int parent[501]={0};
queue<int> pu;

int n,m,count;

int bfs(){
	//트리의 개수를 출력하는 함수
	int total=0;
	bool istree=true;
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			istree=true;
			visit[i]=true;
			pu.push(i);
	
		while(!pu.empty()){
			int now=pu.front();
			pu.pop();
			for(int j=0;j<arr[now].size();j++){
					if(visit[arr[now][j]] && parent[now]!=arr[now][j]){
						istree=false;
					}
					else if(visit[arr[now][j]]){
						continue;
					}
					else{
						visit[arr[now][j]]=true;
						parent[arr[now][j]]=now;
						pu.push(arr[now][j]);
					}
				}
			}
			if(istree) total++;
		}
	}
	return total;
}

int main(){
	int turn=1;
	while(1){
		scanf("%d %d",&n,&m);
		if(n==0 && m==0) break;
		for(int i=1;i<=n;i++){
			arr[i].clear();
			visit[i]=false;
			parent[i]=0;
		}
		for(int i=0;i<m;i++){
			int a,b;
			scanf("%d %d",&a,&b);
			arr[a].push_back(b);
			arr[b].push_back(a);
		}
		count = bfs();
		if(count==0) printf("Case %d: No trees.\n",turn);
		else if(count==1) printf("Case %d: There is one tree.\n",turn);
		else printf("Case %d: A forest of %d trees.\n",turn,count);
		
		turn++;
	}
}