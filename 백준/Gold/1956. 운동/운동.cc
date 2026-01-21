#include <stdio.h>

#define INF 987654321
#define MIN(a,b) (((a)>(b))?(b):(a))

int main(){
	int v,e;
	scanf("%d",&v);
	scanf("%d",&e);
	int dist[v+1][v+1];
	int back[v+1][v+1];
	for(int i=1;i<=v;i++){
		for(int j=1;j<=v;j++){
			dist[i][j]=INF;
			back[i][j]=INF;
		}
		dist[i][i]=0;
	}
	for(int i=0;i<e;i++){
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		if(dist[a][b]>w) {
			dist[a][b]=w;
			back[a][b]=w;
		}
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
	
	
	int minvalue=INF;
	for(int i=1;i<=v;i++){
		for(int j=i+1;j<=v;j++){
			minvalue=MIN(minvalue,dist[i][j]+back[j][i]);
		}
	}
	if(minvalue==INF) printf("-1");
	else printf("%d",minvalue);
}