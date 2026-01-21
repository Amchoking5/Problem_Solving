#include <stdio.h>
#include <vector>

#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int n,c,maxvalue=0;
long long int count[10004];
long long int speed[10004];
vector<int> child[10004];

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
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		count[i]=-1;
		scanf("%d %d",&speed[i],&c);
		for(int j=0;j<c;j++){
			int a;
			scanf("%d",&a);
			child[a].push_back(i);
		}
	}
	
	for(int i=1;i<=n;i++){
		if(count[i]==-1){
			count[i]=build(i);
		}
		maxvalue=MAX(maxvalue,count[i]);
	}
	printf("%d",maxvalue);
}