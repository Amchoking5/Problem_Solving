#include <stdio.h>

int n,m,s;
bool node[1001][1001]={false,};
int q[1001];
int stack[1001];
int sc=0,qhead=0,qtail=0;
bool qvisit[1001]={false,};
bool stackvisit[1001]={false,};

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

void bfs(int now){
	qvisit[now]=true;
	q[qtail]=now;
	qtail++;
	while(qhead<qtail){
		for(int i=0;i<=n;i++){
			if(node[q[qhead]][i] && !qvisit[i]){
				qvisit[i]=true;
				q[qtail]=i;
				qtail++;
			}
		}
		qhead++;
	}
}

int main(){
	int a,b;
	scanf("%d %d %d",&n,&m,&s);
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		node[a][b]=true;
		node[b][a]=true;
	}
	dfs(s);
	bfs(s);
	
	for(int i=0;i<sc;i++){
		printf("%d ",stack[i]);
	}
	printf("\n");
	for(int i=0;i<qtail;i++){
		printf("%d ",q[i]);
	}
	printf("\n");
}