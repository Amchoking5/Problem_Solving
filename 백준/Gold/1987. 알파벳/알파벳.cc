#include <stdio.h>
#include <vector>

#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int r,c;
char board[21][21];
bool alphacheck[30]={false};
int maxvalue=0;

void findans(int x, int y, int move){
	bool thereisway=false;
	if(x>0){
		if(!alphacheck[board[x-1][y]-'A']){
			thereisway=true;
			alphacheck[board[x-1][y]-'A']=true;
			findans(x-1,y,move+1);
			alphacheck[board[x-1][y]-'A']=false;
		}
	}
	
	if(y>0){
		if(!alphacheck[board[x][y-1]-'A']){
			thereisway=true;
			alphacheck[board[x][y-1]-'A']=true;
			findans(x,y-1,move+1);
			alphacheck[board[x][y-1]-'A']=false;
		}
	}
	
	if(x<r-1){
		if(!alphacheck[board[x+1][y]-'A']){
			thereisway=true;
			alphacheck[board[x+1][y]-'A']=true;
			findans(x+1,y,move+1);
			alphacheck[board[x+1][y]-'A']=false;
		}
	}
	
	if(y<c-1){
		if(!alphacheck[board[x][y+1]-'A']){
			thereisway=true;
			alphacheck[board[x][y+1]-'A']=true;
			findans(x,y+1,move+1);
			alphacheck[board[x][y+1]-'A']=false;
		}
	}
	
	if(!thereisway){
		maxvalue=MAX(maxvalue,move);
	}
	
}

int main(){
	scanf("%d %d",&r,&c);
	char readit[21];
	for(int i=0;i<r;i++){
		scanf("%s",readit);
		for(int j=0;j<c;j++){
			board[i][j]=readit[j];
		}
	}
	
	alphacheck[board[0][0]-'A']=true;
	findans(0,0,1);
	
	printf("%d",maxvalue);
	
}