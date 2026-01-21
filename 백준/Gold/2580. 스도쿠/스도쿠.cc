#include <stdio.h>

int gugu[9][9];

bool canx[9][10]={false,};
bool cany[9][10]={false,};
bool cansq[3][3][10]={false};

bool solved=false;

void solve(int cnt){
	if(cnt==81){
		solved=true;
		return;
	}
	int x=cnt/9;
	int y=cnt%9;
	
	if(gugu[x][y]) solve(cnt+1);
	else{
		for(int k=1;k<10;k++){
			if((!canx[x][k]) && (!cany[y][k]) && (!cansq[x/3][y/3][k])){
				canx[x][k]=true;
				cany[y][k]=true;
				cansq[x/3][y/3][k]=true;
				gugu[x][y]=k;
				solve(cnt+1);
				
				if(solved) return;
				
				canx[x][k]=false;
				cany[y][k]=false;
				cansq[x/3][y/3][k]=false;
				gugu[x][y]=0;
			}
		}
	}
}

int main(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			scanf("%d",&gugu[i][j]);
			if(gugu[i][j])
			{
				canx[i][gugu[i][j]]=true;
				cany[j][gugu[i][j]]=true;
				cansq[i/3][j/3][gugu[i][j]]=true;
			}
		}
	}
	
	solve(0);
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			printf("%d ",gugu[i][j]);
		}
		printf("\n");
	}
}