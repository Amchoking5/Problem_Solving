#include <stdio.h>


int main (){
	int body[2][50]={0},rank[50]={0};
	int n,count=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&body[0][i],&body[1][i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(body[0][i]<body[0][j] && body[1][i]<body[1][j]) count++;
		}
		rank[i]=count;
		count=1;
	}
	for(int i=0;i<n;i++){
		printf("%d ",rank[i]);
	}
}