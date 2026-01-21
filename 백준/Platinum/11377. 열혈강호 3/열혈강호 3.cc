#include <stdio.h>
#include <vector>

using namespace std;

int n,m,kp,count=0;
vector<int> choose[1005];
bool check[1005];
int cow[1005];

bool bfs(int x){
	for(int i=0;i<choose[x].size();i++){
		int cage=choose[x][i];
		if(check[cage]) continue;
		check[cage]=true;
		if(cow[cage]==0 || bfs(cow[cage])){
			cow[cage]=x;
			return true;
		}
	}
	return false;
}

int main(){
	scanf("%d %d %d",&n,&m,&kp);
	for(int i=1;i<=n;i++){
		int k;
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			int c;
			scanf("%d",&c);
			choose[i].push_back(c);
		}
	}
	for(int i=1;i<=n;i++){
		fill(check,check+m+1,false);
		if(bfs(i)) count++;
	}
	int kpcount=0;
	for(int i=1;i<=n;i++){
		fill(check,check+m+1,false);
		if(bfs(i)) kpcount++;
		if(kpcount==kp) break;
	}
	printf("%d",count+kpcount);
}