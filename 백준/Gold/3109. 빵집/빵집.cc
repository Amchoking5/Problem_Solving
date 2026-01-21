#include <stdio.h>

bool board[10001][501];
int r,c;

bool dfs(int x,int y){
	if(y==c-1) return true;
	if(x>0){
		if(board[x-1][y+1]){
			board[x-1][y+1]=false;
			bool check=dfs(x-1,y+1);
			if(check) return true;
			//else board[x-1][y+1]=true;
		}
	}
	if(board[x][y+1]){
		board[x][y+1]=false;
		bool check=dfs(x,y+1);
		if(check) return true;
		//else board[x][y+1]=true;
	}
	if(x<r-1){
		if(board[x+1][y+1]){
			board[x+1][y+1]=false;
			bool check=dfs(x+1,y+1);
			if(check) return true;
			//else board[x+1][y+1]=true;
		}
	}
	return false;
}

int main(){
	int count=0;
	scanf("%d %d",&r,&c);
	char line[501];
	for(int i=0;i<r;i++){
		scanf("%s",line);
		for(int j=0;j<c;j++){
			if(line[j]=='.') board[i][j]=true;
			else if(line[j]=='x') board[i][j]=false;
		}
	}
	
	for(int i=0;i<r;i++){
		bool countcheck=dfs(i,0);
		if(countcheck) count++;
	}
	printf("%d",count);
}