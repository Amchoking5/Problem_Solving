#include <stdio.h>

int h,w,n;
int count[1005][1005]={0};
bool board[1005][1005]={false};

int main(){
	scanf("%d %d %d",&h,&w,&n);
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			scanf("%d",&board[i][j]);
		}
	}
	count[0][0]=n-1;
	for(int i=0;i<w+h-1;i++){
		for(int j=0;j<=i;j++){
			if(j>=h || i-j>=w) continue;
			count[j+1][i-j]+=count[j][i-j]/2;
			count[j][i-j+1]+=count[j][i-j]/2;
			if(count[j][i-j]%2){
				if(board[j][i-j]){
					count[j][i-j+1]++;
				}
				else{
					count[j+1][i-j]++;
				}
				board[j][i-j]=(!board[j][i-j]);
			}
		}
	}
	int x=0,y=0;
	while(x<h && y<w){
		if(board[x][y]) y++;
		else x++;
	}
	printf("%d %d",x+1,y+1);
}