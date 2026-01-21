#include <stdio.h>

bool field[53][53]={false,};
int count=0;

void dfs(int x,int y){
	field[x][y]=false;
	if(field[x][y-1]){
		dfs(x,y-1);
	}
	if(field[x][y+1]){
		dfs(x,y+1);
	}
	if(field[x+1][y]){
		dfs(x+1,y);
	}
	if(field[x-1][y]){
		dfs(x-1,y);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		count=0;
		int m,n,k,a,b;
		scanf("%d %d %d",&m,&n,&k);
		for(int j=0;j<k;j++){
			scanf("%d %d",&a,&b);
			field[a+1][b+1]=true;
		}
		
		for(int jx=0;jx<m;jx++){
			for(int jy=0;jy<n;jy++){
				if(field[jx+1][jy+1]){
					count++;
					dfs(jx+1,jy+1);
				}
			}
		}
		
		printf("%d\n",count);
	}
}