#include <stdio.h>
#include <queue>
#include <vector>

#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int n,m;
vector<pair<int, int> > v;
int lab[8][8]={0};
int maxvalue=0;

void bfs(int a,int b,int c){
	int labcopy[8][8]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			labcopy[i][j]=lab[i][j];
		}
	}
	labcopy[a/m][a%m]=1;
	labcopy[b/m][b%m]=1;
	labcopy[c/m][c%m]=1;
	queue<pair<int, int> > qu;
	for(int i=0;i<v.size();i++){
		qu.push({v[i].first,v[i].second});
	}
	while(!qu.empty()){
		int x=qu.front().first;
		int y=qu.front().second;
		qu.pop();
		if(x>0){
			if(labcopy[x-1][y]==0){
				labcopy[x-1][y]=2;
				qu.push({x-1,y});
			}
		}
		if(y>0){
			if(labcopy[x][y-1]==0){
				labcopy[x][y-1]=2;
				qu.push({x,y-1});
			}
		}
		if(x<n-1){
			if(labcopy[x+1][y]==0){
				labcopy[x+1][y]=2;
				qu.push({x+1,y});
			}
		}
		if(y<m-1){
			if(labcopy[x][y+1]==0){
				labcopy[x][y+1]=2;
				qu.push({x,y+1});
			}
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(labcopy[i][j]==0) count++;
		}
	}
	maxvalue=MAX(maxvalue,count);
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&lab[i][j]);
			if(lab[i][j]==2){
				v.push_back({i,j});
			}
		}
	}
	for(int i=0;i<n*m;i++){
		if(lab[i/m][i%m]!=0) continue;
		for(int j=i+1;j<n*m;j++){
			if(lab[j/m][j%m]!=0) continue;
			for(int k=j+1;k<n*m;k++){
				if(lab[k/m][k%m]!=0) continue;
				bfs(i,j,k);
			}
		}
	}
	printf("%d",maxvalue);
}