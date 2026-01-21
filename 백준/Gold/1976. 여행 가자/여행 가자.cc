#include <stdio.h>

int parent[205]={0};
int path[1001];

int find(int x){
	if(parent[x]==0) return x;
	int let = find(parent[x]);
	parent[x]=let;
	return let;
}

void setgroup(int set1,int set2){
	int boss1=find(set1);
	int boss2=find(set2);
	if(boss1==boss2) return;
	parent[boss1]=boss2;
}

int main(){
	int n,m;
	bool cango=true;
	scanf("%d",&n);
	scanf("%d",&m);
	
	if(m==0 || m==1){
		printf("YES");
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int check;
			scanf("%d",&check);
			if(check) setgroup(i,j);
		}
	}
	
	scanf("%d",&path[0]);
	for(int i=1;i<m;i++){
		scanf("%d",&path[i]);
		int boss1 = find(path[i-1]);
		int boss2 = find(path[i]);
		if(boss1!=boss2){
			cango=false;
			break;
		}
	}
	if(cango) printf("YES");
	else printf("NO");
	
}