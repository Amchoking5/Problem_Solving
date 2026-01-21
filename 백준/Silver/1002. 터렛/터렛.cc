#include <stdio.h>
#include <math.h>

int main(){
	int t;
	int x1[1000],y1[1000],r1[1000],x2[1000],y2[1000],r2[1000],result[1000];
	scanf("%d",&t);
	for(int i=0; i<t;i++){
		scanf("%d %d %d %d %d %d",&x1[i],&y1[i],&r1[i],&x2[i],&y2[i],&r2[i]);
	}
	for(int i=0; i<t;i++){
		int xx,yy,dis;
		xx = x1[i]-x2[i];
		yy= y1[i]-y2[i];
		dis = (xx*xx)+(yy*yy);
		if ((dis> (r1[i]+r2[i])*(r1[i]+r2[i])) || ((r1[i]-r2[i])*(r1[i]-r2[i])>dis)){
			result[i]=0;
		}
		else if(x1[i]==x2[i] && y1[i]==y2[i] && r1[i]==r2[i]){
			result[i]=-1;
		}
		else if ((dis== (r1[i]+r2[i])*(r1[i]+r2[i])) || ((r1[i]-r2[i])*(r1[i]-r2[i])==dis)){
			result[i]=1;
		}
		else{
			result[i]=2;
		}
	}
	for(int i=0; i<t;i++){
		printf("%d\n",result[i]);
	}
}