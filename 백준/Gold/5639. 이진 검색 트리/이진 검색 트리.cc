#include <stdio.h>

int preorder[10001], p_size=0;

void print(int start,int end){
	if(start>end) return;
	if(start==end){
		printf("%d\n",preorder[start]);
		return;
	}
	int root=preorder[start];
	int mid=start+1;
	for(int i=start+1;i<=end;i++){
		if(root<preorder[i]){
			mid=i;
			break;
		}
	}
	//printf("num : %d start : %d mid : %d end : %d\n",root,start,mid,end);
	print(start+1,mid-1);
	print(mid,end);
	printf("%d\n",root);
}

int main(){
	int n;
	while(scanf("%d",&preorder[p_size++])!=EOF);
	print(0,p_size-2);
}