#include <stdio.h>

int t,l;

bool board[300][300];
int q[100000][2];
int count[100000];
int qhead=0,qtail=0;

int bfs(int x1,int y1,int x2,int y2){
	
	if(x1==x2 && y1==y2) return 0;
	
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			board[i][j]=false;
		}
	}
	
	qhead=0,qtail=0;
	
	board[x1][y1]=true;
	q[qtail][0]=x1;
	q[qtail][1]=y1;
	count[qtail]=0;
	qtail++;
	
	while(qhead<qtail){
		
		int x=q[qhead][0];
		int y=q[qhead][1];
		
		if(x<l-1 && y>1){
			int newx=x+1;
			int newy=y-2;
			if(!board[newx][newy]){
				board[newx][newy]=true;
				q[qtail][0]=newx;
				q[qtail][1]=newy;
				count[qtail]=count[qhead]+1;
				if(newx==x2 && newy==y2){
					return count[qtail];
				}
				qtail++;
			}
		}
		if(x<l-2 && y>0){
			int newx=x+2;
			int newy=y-1;
			if(!board[newx][newy]){
				board[newx][newy]=true;
				q[qtail][0]=newx;
				q[qtail][1]=newy;
				count[qtail]=count[qhead]+1;
				if(newx==x2 && newy==y2){
					return count[qtail];
				}
				qtail++;
			}
		}
		if(x<l-2 && y<l-1){
			int newx=x+2;
			int newy=y+1;
			if(!board[newx][newy]){
				board[newx][newy]=true;
				q[qtail][0]=newx;
				q[qtail][1]=newy;
				count[qtail]=count[qhead]+1;
				if(newx==x2 && newy==y2){
					return count[qtail];
				}
				qtail++;
			}
		}
		if(x<l-1 && y<l-2){
			int newx=x+1;
			int newy=y+2;
			if(!board[newx][newy]){
				board[newx][newy]=true;
				q[qtail][0]=newx;
				q[qtail][1]=newy;
				count[qtail]=count[qhead]+1;
				if(newx==x2 && newy==y2){
					return count[qtail];
				}
				qtail++;
			}
		}
		if(x>0 && y<l-2){
			int newx=x-1;
			int newy=y+2;
			if(!board[newx][newy]){
				board[newx][newy]=true;
				q[qtail][0]=newx;
				q[qtail][1]=newy;
				count[qtail]=count[qhead]+1;
				if(newx==x2 && newy==y2){
					return count[qtail];
				}
				qtail++;
			}
		}
		if(x>1 && y<l-1){
			int newx=x-2;
			int newy=y+1;
			if(!board[newx][newy]){
				board[newx][newy]=true;
				q[qtail][0]=newx;
				q[qtail][1]=newy;
				count[qtail]=count[qhead]+1;
				if(newx==x2 && newy==y2){
					return count[qtail];
				}
				qtail++;
			}
		}
		if(x>1 && y>0){
			int newx=x-2;
			int newy=y-1;
			if(!board[newx][newy]){
				board[newx][newy]=true;
				q[qtail][0]=newx;
				q[qtail][1]=newy;
				count[qtail]=count[qhead]+1;
				if(newx==x2 && newy==y2){
					return count[qtail];
				}
				qtail++;
			}
		}
		if(x>0 && y>1){
			int newx=x-1;
			int newy=y-2;
			if(!board[newx][newy]){
				board[newx][newy]=true;
				q[qtail][0]=newx;
				q[qtail][1]=newy;
				count[qtail]=count[qhead]+1;
				if(newx==x2 && newy==y2){
					return count[qtail];
				}
				qtail++;
			}
		}
		qhead++;
	}
	
	return 0;
	
}


int main(){
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int x1,y1,x2,y2,ans;
		scanf("%d",&l);
		scanf("%d %d",&x1,&y1);
		scanf("%d %d",&x2,&y2);
		ans=bfs(x1,y1,x2,y2);
		printf("%d\n",ans);
	}
}