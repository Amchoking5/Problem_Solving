#include <stdio.h>

char hash[51];
long long sum=0,multi=1;
int n;

int main(){
	scanf("%d",&n);
	scanf("%s",hash);
	for(int i=0;i<n;i++){
		sum+=(hash[i]-'a'+1)*multi;
		sum=sum%1234567891;
		multi=multi*31;
		multi=multi%1234567891;
	}
	printf("%d",sum);
}