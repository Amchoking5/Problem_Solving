#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;

queue <int> qu;

int parent[100001]={0};

int main(){
	int n;
	scanf("%d",&n);
	vector<int> arr[n+1];
	for(int i=1;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	qu.push(1);
	while(!qu.empty()){
		int now=qu.front();
		qu.pop();
		for(int i=0;i<arr[now].size();i++){
			if(parent[arr[now][i]]==0){
				parent[arr[now][i]]=now;
				qu.push(arr[now][i]);
			}	
		}
	}
	for(int i=2;i<=n;i++){
		printf("%d\n",parent[i]);
	}
}