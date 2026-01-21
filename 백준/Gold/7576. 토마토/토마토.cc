#include <stdio.h>

int n,m;
int maze[1000][1000];
int q[1000001][2];
int qhead=0,qtail=0,neg=0;
int count[1000001];
bool qvisit[1000][1000]={false,};

void bfs(){
	while(qhead<qtail){
		
		int x=q[qhead][0];
		int y=q[qhead][1];
		
		if(x<m-1){
			if(maze[x+1][y]==0 && !qvisit[x+1][y]){
				qvisit[x+1][y]=true;
				q[qtail][0]=x+1;
				q[qtail][1]=y;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(x>0){
			if(maze[x-1][y]==0 && !qvisit[x-1][y]){
				qvisit[x-1][y]=true;
				q[qtail][0]=x-1;
				q[qtail][1]=y;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(y<n-1){
			if(maze[x][y+1]==0 && !qvisit[x][y+1]){
				qvisit[x][y+1]=true;
				q[qtail][0]=x;
				q[qtail][1]=y+1;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(y>0){
			if(maze[x][y-1]==0 && !qvisit[x][y-1]){
				qvisit[x][y-1]=true;
				q[qtail][0]=x;
				q[qtail][1]=y-1;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		qhead++;
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&maze[i][j]);
			if(maze[i][j]==1){
				qvisit[i][j]=true;
				q[qtail][0]=i;
				q[qtail][1]=j;
				count[qtail]=0;
				qtail++;
			}
			else if(maze[i][j]==-1){
				neg++;
			}
		}
	}
	
	bfs();
	
	if(qtail+neg==(n*m)){
		printf("%d",count[qtail-1]);
	}
	else{
		printf("-1");
	}
}