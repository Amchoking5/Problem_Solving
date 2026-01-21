#include <stdio.h>
#include <queue>

using namespace std;

int n;
int rg[101][101];
int normal[101][101];
int countrg=0,countnormal=0;

void checkrg(int i,int j,int color){
	countrg++;
	queue<pair<int,int> > qurg;
	qurg.push({i,j});
	rg[i][j]=countrg;
	
	while(!qurg.empty()){
		int x=qurg.front().first;
		int y=qurg.front().second;
		qurg.pop();
		
		if(x>0){
			if(rg[x-1][y]==color){
				qurg.push({x-1,y});
				rg[x-1][y]=countrg;
			}
		}
		
		if(y>0){
			if(rg[x][y-1]==color){
				qurg.push({x,y-1});
				rg[x][y-1]=countrg;
			}
		}
		
		if(x<n-1){
			if(rg[x+1][y]==color){
				qurg.push({x+1,y});
				rg[x+1][y]=countrg;
			}
		}
		
		if(y<n-1){
			if(rg[x][y+1]==color){
				qurg.push({x,y+1});
				rg[x][y+1]=countrg;
			}
		}
	}	
}

void checknormal(int i,int j,int color){
	countnormal++;
	queue<pair<int,int> > qunormal;
	qunormal.push({i,j});
	normal[i][j]=countnormal;
	
	while(!qunormal.empty()){
		int x=qunormal.front().first;
		int y=qunormal.front().second;
		qunormal.pop();
		
		if(x>0){
			if(normal[x-1][y]==color){
				qunormal.push({x-1,y});
				normal[x-1][y]=countnormal;
			}
		}
		
		if(y>0){
			if(normal[x][y-1]==color){
				qunormal.push({x,y-1});
				normal[x][y-1]=countnormal;
			}
		}
		
		if(x<n-1){
			if(normal[x+1][y]==color){
				qunormal.push({x+1,y});
				normal[x+1][y]=countnormal;
			}
		}
		
		if(y<n-1){
			if(normal[x][y+1]==color){
				qunormal.push({x,y+1});
				normal[x][y+1]=countnormal;
			}
		}
	}	
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char road[101];
		scanf("%s",road);
		for(int j=0;j<n;j++){
			if(road[j]=='R'){
				rg[i][j]=-1;
				normal[i][j]=-1;
			}
			if(road[j]=='G'){
				rg[i][j]=-1;
				normal[i][j]=-2;
			}
			if(road[j]=='B'){
				rg[i][j]=-2;
				normal[i][j]=-3;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(rg[i][j]<0){
				checkrg(i,j,rg[i][j]);
			}
			if(normal[i][j]<0){
				checknormal(i,j,normal[i][j]);
			}
		}
	}
	
	printf("%d %d",countnormal,countrg);
	
}