#include <stdio.h>

int stars[6562][6562]={0,};

void star(int x,int y,int a){
	int m=a/3;
	if(a==1) return;
	for(int i=x+m;i<x+2*m;i++){
		for(int j=y+m;j<y+2*m;j++){
			stars[i][j]=1;
		}
	}
	star(x,y,m);
	star(x+m,y,m);
	star(x+2*m,y,m);
	star(x,y+m,m);
	star(x+m,y+m,m);
	star(x+2*m,y+m,m);
	star(x,y+2*m,m);
	star(x+m,y+2*m,m);
	star(x+2*m,y+2*m,m);
}

int main (){
	int a;
	scanf("%d",&a);
	star(0,0,a);
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(stars[i][j]==0) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}