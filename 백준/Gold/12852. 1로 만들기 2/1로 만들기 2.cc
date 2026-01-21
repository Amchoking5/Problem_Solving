#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

int n;
vector <int> result;
queue <int> q;
int nums[1000001]={0};
int path[1000001]={0};

void bfs(){
	q.push(n);
	while(!q.empty()){
		int now = q.front();
		q.pop();
		
		if(now==1) return;
		
		if(now%3==0){
			if(nums[now/3]==0 || nums[now/3]>nums[now]+1){
				q.push(now/3);
				nums[now/3]=nums[now]+1;
				path[now/3]=now;
			}
		}
		if(now%2==0){
			if(nums[now/2]==0 || nums[now/2]>nums[now]+1){
				q.push(now/2);
				nums[now/2]=nums[now]+1;
				path[now/2]=now;
			}
		}
		if(nums[now-1]==0 || nums[now-1]>nums[now]+1){
			q.push(now-1);
			nums[now-1]=nums[now]+1;
			path[now-1]=now;
		}
		
	}
}

int main(){
	scanf("%d",&n);
	bfs();
	printf("%d\n",nums[1]);
	int i=1;
	while(i!=n){
		result.push_back(i);
		i=path[i];
	}
	result.push_back(i);
	for(int i=result.size()-1;i>=0;i--){
		printf("%d ",result[i]);
	}
}