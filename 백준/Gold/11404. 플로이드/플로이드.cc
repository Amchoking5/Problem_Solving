#include <stdio.h>

#define INF 987654321

int main(){
	int v,e;
	scanf("%d",&v);
	scanf("%d",&e);
	int dist[v+1][v+1];
	for(int i=1;i<=v;i++){
		for(int j=1;j<=v;j++){
			dist[i][j]=INF;
		}
		dist[i][i]=0;
	}
	for(int i=0;i<e;i++){
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		if(dist[a][b]>w) dist[a][b]=w;
	}
	bool change=true;
	while(change){
		change=false;
		for(int i=1;i<=v;i++){
			for(int j=1;j<=v;j++){
				for(int k=1;k<=v;k++){					
					if(dist[i][k]>dist[i][j]+dist[j][k]){
						change=true;
						dist[i][k]=dist[i][j]+dist[j][k];
					}
				}
			}
		}
	}
	
	for(int i=1;i<=v;i++){
		for(int j=1;j<=v;j++){
			if(dist[i][j]==INF) printf("0 ");
			else printf("%d ",dist[i][j]);
		}
		printf("\n");
	}
}