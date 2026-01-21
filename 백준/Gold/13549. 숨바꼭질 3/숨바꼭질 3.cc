#include <stdio.h>
#include <vector>
#include <queue>

#define INF 2000000000

using namespace std;

int a[100001]={0};
bool visit[100001]={false};
queue<int> qu;
int n,k,ans;

int main(){
	scanf("%d %d",&n,&k);
	qu.push(n);
	visit[n]=true;
	while(!qu.empty()){
		int now=qu.front();
		int time=a[now];
		if(now==k){
			printf("%d",time);
			return 0;
		}
		qu.pop();
		int b=2*now;
		while(b<=100000 && !visit[b]){
			qu.push(b);
			visit[b]=true;
			a[b]=time;
			b=b*2;
		}
		if(now>0){
			if(!visit[now-1]){
				qu.push(now-1);
				a[now-1]=time+1;
				visit[now-1]=true;
			}
		}
		if(now<100000){
			if(!visit[now+1]){
				qu.push(now+1);
				a[now+1]=time+1;
				visit[now+1]=true;
			}
		}
	}
}