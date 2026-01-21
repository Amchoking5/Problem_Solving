#include <stdio.h>
#include <vector>

using namespace std;

int n,m,count=0;
vector<int> choose[205];
bool check[205];
int cow[205];

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
	scanf("%d %d",&n,&m);
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
	printf("%d",count);
}