#include <stdio.h>

int n,m,sc=0;
bool node[101][101]={false,};
int stack[101];
bool stackvisit[101]={false,};

void dfs(int now){
	stackvisit[now]=true;
	stack[sc]=now;
	sc++;
	for(int i=0;i<=n;i++){
		if(node[now][i] && !stackvisit[i]){
			dfs(i);
		}
	}
}

int main(){
	int a,b;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		node[a][b]=true;
		node[b][a]=true;
	}
	dfs(1);
	printf("%d",sc-1);
}