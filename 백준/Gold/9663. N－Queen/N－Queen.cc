#include <stdio.h>

bool board[14][14]={false,};
int n, cnt, ans=0;

bool canput(int i,int cnt){
	int x,y;
	for(int x=0;x<cnt;x++){
		if(board[i][x]) return false;
	}
	for(int x=cnt-1,y=i-1;y>-1;x--,y--){
		if(board[y][x]) return false;
	}
	for(int x=cnt-1,y=i+1;y<n;x--,y++){
		if(board[y][x]) return false;
	}
	return true;
}

void chess(int cnt){
	if(n==cnt){
		ans++;
		return;
	}
	for(int i=0;i<n;i++){
		if(canput(i,cnt)){
			board[i][cnt]=true;
			chess(cnt+1);
			board[i][cnt]=false;
		}
	}
}

int main(){
	scanf("%d",&n);
	chess(0);
	printf("%d",ans);
}