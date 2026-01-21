#include <stdio.h>

int paper[128][128];

void solve(int x,int y,int n){
	
	int check=paper[x][y];
	bool allright=true;
	if(n==1){
		if(check==1){
			printf("1");
			return;
		}
		else{
			printf("0");
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
			printf("1");
			return;
		}
		else{
			printf("0");
			return;
		}
	}
	printf("(");
	solve(x,y,n/2);
	solve(x,y+n/2,n/2);
	solve(x+n/2,y,n/2);
	solve(x+n/2,y+n/2,n/2);
	printf(")");
}
int main(){
	int n;
	char nums[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&nums);
		for(int j=0;j<n;j++){
			if(nums[j]=='0'){
				paper[i][j]=0;
			}
			else if(nums[j]=='1'){
				paper[i][j]=1;
			}
		}
	}
	solve(0,0,n);
}