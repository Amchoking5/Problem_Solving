#include <stdio.h>

int n,m;
bool maze[103][103]={false,};
int q[20000][2];
int qhead=0,qtail=0;
int count[103][103]={0,};
bool qvisit[103][103]={false,};

void bfs(){
	int x=1,y=1;
	qvisit[1][1]=true;
	count[1][1]=1;
	q[qtail][0]=x;
	q[qtail][1]=y;
	qtail++;
	while(qhead<qtail){
		
		x=q[qhead][0];
		y=q[qhead][1];

		
		if(x==n && y==m){
			break;
		}
		if(maze[x+1][y] && !qvisit[x+1][y]){
			qvisit[x+1][y]=true;
			q[qtail][0]=x+1;
			q[qtail][1]=y;
			count[x+1][y]=count[x][y]+1;
			qtail++;
		}
		
		if(maze[x-1][y] && !qvisit[x-1][y]){
			qvisit[x-1][y]=true;
			q[qtail][0]=x-1;
			q[qtail][1]=y;
			count[x-1][y]=count[x][y]+1;
			qtail++;
		}
		
		if(maze[x][y+1] && !qvisit[x][y+1]){
			qvisit[x][y+1]=true;
			q[qtail][0]=x;
			q[qtail][1]=y+1;
			count[x][y+1]=count[x][y]+1;
			qtail++;
		}
		
		if(maze[x][y-1] && !qvisit[x][y-1]){
			qvisit[x][y-1]=true;
			q[qtail][0]=x;
			q[qtail][1]=y-1;
			count[x][y-1]=count[x][y]+1;
			qtail++;
		}
		
		qhead++;
	}
}

int main(){
	char road[101];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%s",road);
		for(int j=0;j<m;j++){
			maze[i+1][j+1]=road[j]-'0';
		}
	}
	bfs();
	printf("%d",count[n][m]);
}