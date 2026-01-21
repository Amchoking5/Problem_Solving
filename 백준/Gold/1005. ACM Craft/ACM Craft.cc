#include <stdio.h>
#include <vector>

#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int t,n,k,w;
long long int count[1004];
long long int speed[1004];
vector<int> child[1004];

long long int build(int now){
	if(child[now].size()==0){
		return speed[now];
	}
	else{
		long long int maxvalue=0;
		for(int i=0;i<child[now].size();i++){
			if(count[child[now][i]]==-1){
				count[child[now][i]]=build(child[now][i]);
			}
			maxvalue=MAX(maxvalue,count[child[now][i]]);
		}
		return maxvalue+speed[now];
	}
}

int main(){
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&n,&k);
		for(int i=1;i<=n;i++){
			scanf("%d",&speed[i]);
			count[i]=-1;
			child[i].clear();
		}
		for(int i=0;i<k;i++){
			int start,end;
			scanf("%d %d",&start,&end);
			child[end].push_back(start);
		}
		scanf("%d",&w);
		
		printf("%lld\n",build(w));
		
	}
}