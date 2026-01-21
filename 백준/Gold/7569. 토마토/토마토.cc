#include <stdio.h>

int n,m,h;
int maze[100][100][100];
int q[1000001][3];
int qhead=0,qtail=0,neg=0;
int count[1000001];
bool qvisit[100][100][100]={false,};

void bfs(){
	while(qhead<qtail){
		
		int x=q[qhead][0];
		int y=q[qhead][1];
		int z=q[qhead][2];
		
		if(x<m-1){
			if(maze[x+1][y][z]==0 && !qvisit[x+1][y][z]){
				qvisit[x+1][y][z]=true;
				q[qtail][0]=x+1;
				q[qtail][1]=y;
				q[qtail][2]=z;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(x>0){
			if(maze[x-1][y][z]==0 && !qvisit[x-1][y][z]){
				qvisit[x-1][y][z]=true;
				q[qtail][0]=x-1;
				q[qtail][1]=y;
				q[qtail][2]=z;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(y<n-1){
			if(maze[x][y+1][z]==0 && !qvisit[x][y+1][z]){
				qvisit[x][y+1][z]=true;
				q[qtail][0]=x;
				q[qtail][1]=y+1;
				q[qtail][2]=z;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(y>0){
			if(maze[x][y-1][z]==0 && !qvisit[x][y-1][z]){
				qvisit[x][y-1][z]=true;
				q[qtail][0]=x;
				q[qtail][1]=y-1;
				q[qtail][2]=z;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(z<h-1){
			if(maze[x][y][z+1]==0 && !qvisit[x][y][z+1]){
				qvisit[x][y][z+1]=true;
				q[qtail][0]=x;
				q[qtail][1]=y;
				q[qtail][2]=z+1;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(z>0){
			if(maze[x][y][z-1]==0 && !qvisit[x][y][z-1]){
				qvisit[x][y][z-1]=true;
				q[qtail][0]=x;
				q[qtail][1]=y;
				q[qtail][2]=z-1;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		qhead++;
	}
}

int main(){
	scanf("%d %d %d",&n,&m,&h);
	for(int k=0;k<h;k++){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&maze[i][j][k]);
			if(maze[i][j][k]==1){
				qvisit[i][j][k]=true;
				q[qtail][0]=i;
				q[qtail][1]=j;
				q[qtail][2]=k;
				count[qtail]=0;
				qtail++;
			}
			else if(maze[i][j][k]==-1){
				neg++;
			}
		}
	}
	}
	
	bfs();
	
	if(qtail+neg==(n*m*h)){
		printf("%d",count[qtail-1]);
	}
	else{
		printf("-1");
	}
}