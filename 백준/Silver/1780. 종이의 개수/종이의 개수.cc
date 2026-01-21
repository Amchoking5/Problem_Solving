#include <stdio.h>

int paper[2187][2187];
int pos=0,zero=0,neg=0;

void solve(int x,int y,int n){
	
	int check=paper[x][y];
	bool allright=true;
	
	if(n==1){
		if(check==1){
			pos++;
			return;
		}
		else if(check==-1){
			neg++;
			return;
		}
		else{
			zero++;
			return;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check!=paper[x+i][y+j]){
				allright=false;
				break;
			}
		}
		if(!allright) break;
	}
	
	if(allright){
		if(check==1){
			pos++;
			return;
		}
		else if(check==-1){
			neg++;
			return;
		}
		else{
			zero++;
			return;
		}
	}
	
	int part=n/3;
	solve(x,y,part);
	solve(x,y+part,part);
	solve(x,y+part*2,part);
	solve(x+part,y,part);
	solve(x+part,y+part,part);
	solve(x+part,y+part*2,part);
	solve(x+part*2,y,part);
	solve(x+part*2,y+part,part);
	solve(x+part*2,y+part*2,part);
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&paper[i][j]);
		}
	}
	solve(0,0,n);
	printf("%d\n%d\n%d",neg,zero,pos);
	scanf("%d",&n);
}