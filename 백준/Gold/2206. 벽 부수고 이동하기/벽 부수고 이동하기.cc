#include <stdio.h>

int n,m;
bool maze[1000][1000]={false,};
bool qvisit1[1000][1000]={false,};
bool qvisit2[1000][1000]={false,};
int q[10000000][2];
bool pushed[10000000]={false,};
int qhead=0,qtail=0;
int count[10000000]={0,};
bool solved=false;

void bfs(){
	int x=0,y=0;
	qvisit1[0][0]=true;
	count[qtail]=1;
	q[qtail][0]=x;
	q[qtail][1]=y;
	qtail++;
	while(qhead<qtail){
		
		x=q[qhead][0];
		y=q[qhead][1];
		
		
		if(x==n-1 && y==m-1){
			solved=true;
			break;
		}
		
		if(x<n-1){
			if(pushed[qhead]){
				if(!maze[x+1][y] && !qvisit2[x+1][y]){
					qvisit2[x+1][y]=true;
					q[qtail][0]=x+1;
					q[qtail][1]=y;
					count[qtail]=count[qhead]+1;
					pushed[qtail]=true;
					qtail++;
				}
			}
			else{
				if(!maze[x+1][y] && !qvisit1[x+1][y]){
					qvisit1[x+1][y]=true;
					q[qtail][0]=x+1;
					q[qtail][1]=y;
					count[qtail]=count[qhead]+1;
					qtail++;
				}
				else if(maze[x+1][y] && !qvisit1[x+1][y]){
					qvisit2[x+1][y]=true;
					q[qtail][0]=x+1;
					q[qtail][1]=y;
					pushed[qtail]=true;
					count[qtail]=count[qhead]+1;
					qtail++;
				}
			}
		}
		
		if(x>0){
			if(pushed[qhead]){
				if(!maze[x-1][y] && !qvisit2[x-1][y]){
					qvisit2[x-1][y]=true;
					q[qtail][0]=x-1;
					q[qtail][1]=y;
					count[qtail]=count[qhead]+1;
					pushed[qtail]=true;
					qtail++;
				}
			}
			else{
				if(!maze[x-1][y] && !qvisit1[x-1][y]){
					qvisit1[x-1][y]=true;
					q[qtail][0]=x-1;
					q[qtail][1]=y;
					count[qtail]=count[qhead]+1;
					qtail++;
				}
				else if(maze[x-1][y] && !qvisit1[x-1][y]){
					qvisit2[x-1][y]=true;
					q[qtail][0]=x-1;
					q[qtail][1]=y;
					pushed[qtail]=true;
					count[qtail]=count[qhead]+1;
					qtail++;
				}
			}
		}
		
		if(y<m-1){
			if(pushed[qhead]){
				if(!maze[x][y+1] && !qvisit2[x][y+1]){
					qvisit2[x][y+1]=true;
					q[qtail][0]=x;
					q[qtail][1]=y+1;
					count[qtail]=count[qhead]+1;
					pushed[qtail]=true;
					qtail++;
				}
			}
			else{
				if(!maze[x][y+1] && !qvisit1[x][y+1]){
					qvisit1[x][y+1]=true;
					q[qtail][0]=x;
					q[qtail][1]=y+1;
					count[qtail]=count[qhead]+1;
					qtail++;
				}
				else if(maze[x][y+1] && !qvisit1[x][y+1]){
					qvisit2[x][y+1]=true;
					q[qtail][0]=x;
					q[qtail][1]=y+1;
					pushed[qtail]=true;
					count[qtail]=count[qhead]+1;
					qtail++;
				}
			}
		}
		
		if(y>0){
			if(pushed[qhead]){
				if(!maze[x][y-1] && !qvisit2[x][y-1]){
					qvisit2[x][y-1]=true;
					q[qtail][0]=x;
					q[qtail][1]=y-1;
					count[qtail]=count[qhead]+1;
					pushed[qtail]=true;
					qtail++;
				}
			}
			else{
				if(!maze[x][y-1] && !qvisit1[x][y-1]){
					qvisit1[x][y-1]=true;
					q[qtail][0]=x;
					q[qtail][1]=y-1;
					count[qtail]=count[qhead]+1;
					qtail++;
				}
				else if(maze[x][y-1] && !qvisit1[x][y-1]){
					qvisit2[x][y-1]=true;
					q[qtail][0]=x;
					q[qtail][1]=y-1;
					pushed[qtail]=true;
					count[qtail]=count[qhead]+1;
					qtail++;
				}
			}
		}
		
		qhead++;
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		char road[1000];
		scanf("%s",road);
		for(int j=0;j<m;j++){
			maze[i][j]=road[j]-'0';
		}
	}
	
	bfs();
	if(solved) printf("%d",count[qhead]);
	else printf("-1");
}