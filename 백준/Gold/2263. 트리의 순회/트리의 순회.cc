#include <stdio.h>
#include <vector>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

int n;
vector <int> inorder;
vector <int> postorder;
int inindex[100001];
int postindex[100001];

void print(int start,int end,int time){
	if(start>end) return;
	if(start == end){
		printf("%d ",postorder[start]);
		return;
	}
	int root=postorder[end];
	int rootindex=inindex[root]-time;
	
	printf("%d ",root);
	
	print(start,rootindex-1,time);
	print(rootindex,end-1,time+1);
}

int main(){
	int a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		inorder.push_back(a);
		inindex[a]=i;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		postorder.push_back(a);
		postindex[a]=i;
	}
	
	for(int i=0;i<n;i++){
		//printf("%d %d %d %d\n",inorder[i],inindex[i+1],postorder[i],postindex[i+1]);
	}
	
	print(0,n-1,0);
}