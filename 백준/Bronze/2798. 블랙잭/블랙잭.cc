#include <stdio.h>


int main (){
	int cards[101]={0};
	int n,m,a,min=300001;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&cards[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(cards[i]+cards[j]+cards[k]>m) continue;
				if(m-(cards[i]+cards[j]+cards[k])<min) min=m-(cards[i]+cards[j]+cards[k]);
			}
		}
	}
	printf("%d",m-min);
}