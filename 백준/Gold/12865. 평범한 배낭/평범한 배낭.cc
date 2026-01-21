#include <stdio.h>

#define MAX(a,b) (((a)<(b)) ? (b) : (a))
int weight[100001]={0};
int main(){
	int n,k,w,v,maxvalue=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d %d",&w,&v);
		
		for(int j=100000;j>=0;j--){
			if(j+w<100001){
				if(weight[j+w]<weight[j]+v){
					weight[j+w]=weight[j]+v;
				}
			}
		}
	}
	
	for(int i=0;i<k+1;i++){
		maxvalue=MAX(maxvalue,weight[i]);
	}
	printf("%d",maxvalue);
}