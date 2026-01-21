#include <stdio.h>
#include <vector>

using namespace std;

int n,m,t,count=0;
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
	scanf("%d",&t);
	for(int testcase=0;testcase<t;testcase++){
		scanf("%d %d",&n,&m);
		count=0;
		for(int i=0;i<=n;i++){
			cow[i]=0;
		}
		for(int i=1;i<=m;i++){
			choose[i].clear();
			int a,b;
			scanf("%d %d",&a,&b);
			for(int j=a;j<=b;j++){
				choose[i].push_back(j);
			}
		}
		for(int i=1;i<=m;i++){
			fill(check,check+n+1,false);
			if(bfs(i)) count++;
		}
		printf("%d\n",count);
	}
}