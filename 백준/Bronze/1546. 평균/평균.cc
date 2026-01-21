#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	double a,arr[t],sum=0.0,maxs=0.0;
	for(int i=0;i<t;i++){
		scanf("%lf",&a);
		arr[i]=a;
		if(maxs<a) maxs=a;
	}
	for(int i=0;i<t;i++){
		sum+=arr[i]*100/maxs;
	}
	printf("%0.2lf",sum/t);
}