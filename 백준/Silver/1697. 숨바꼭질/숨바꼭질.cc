#include <stdio.h>

int n,k;
int qhead=0,qtail=0;
int count[100001];
int place[100001];
bool visit[100001]={false,};

void bfs(){
	int now;
	count[qtail]=0;
	place[qtail]=n;
	visit[n]=true;
	qtail++;
	while(qhead<qtail){
		now=place[qhead];
		
		
		if(place[qtail-1]==k) break;
		
		if(now*2<100001){
			if(!visit[now*2]){
				visit[now*2]=true;
				place[qtail]=now*2;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(place[qtail-1]==k) break;
		
		if(now+1<100001){
			if(!visit[now+1]){
				visit[now+1]=true;
				place[qtail]=now+1;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(place[qtail-1]==k) break;
		
		if(now>0){
			if(!visit[now-1]){
				visit[now-1]=true;
				place[qtail]=now-1;
				count[qtail]=count[qhead]+1;
				qtail++;
			}
		}
		
		if(place[qtail-1]==k) break;
		
		qhead++;
	}
}

int main(){
	scanf("%d %d",&n,&k);
	bfs();
	printf("%d",count[qtail-1]);
}