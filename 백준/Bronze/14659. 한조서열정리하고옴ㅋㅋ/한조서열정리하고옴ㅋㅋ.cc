#include <stdio.h>

int main(){
	int n,a,now=0,nowk=0,maxk=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a>now){
			now=a;
			if(nowk>maxk){
				maxk=nowk;
			}
			nowk=0;
		}
		else{
			nowk++;
		}
	}
	if(nowk>maxk){
		maxk=nowk;
	}
	printf("%d",maxk);
}