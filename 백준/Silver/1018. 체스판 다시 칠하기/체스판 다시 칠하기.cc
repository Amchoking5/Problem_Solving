#include <stdio.h>

#define MIN(a,b) (((a)>(b))?(b):(a))

int main (){
	char lines[50];
	char chess[50][50]={0};
	int n,m,count1=0,count2=0,mincount=999999;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%s",lines);
		for(int j=0;j<m;j++){
			if(lines[j]=='W') chess[i][j]=0;
			if(lines[j]=='B') chess[i][j]=1;
		}
	}
	for(int i1=0;i1<=n-8;i1++){
		for(int j1=0;j1<=m-8;j1++){
			for(int i=i1;i<i1+8;i++){
				for(int j=j1;j<j1+8;j++){
					if((i+j+1)%2==1 && chess[i][j]==0) count1++;
					else if((i+j+1)%2==0 && chess[i][j]==1) count1++;
					else if((i+j+1)%2==1 && chess[i][j]==1) count2++;
					else if((i+j+1)%2==0 && chess[i][j]==0) count2++;
				}
			}
			mincount=MIN(mincount,count1);
			mincount=MIN(mincount,count2);
			count1=0;
			count2=0;
		}
	}
	
	printf("%d",mincount);
}