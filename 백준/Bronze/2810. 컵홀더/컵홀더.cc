#include <stdio.h>

int main(){
	int n,s=0,l=0;
	scanf("%d",&n);
	char site[51];
	scanf("%s",site);
	for(int i=0;i<n;i++){
		if(site[i]=='S'){
			s++;
		}
		else{
			l++;
		}
	}
	if(l==0) printf("%d",n);
	else printf("%d",1+s+(l/2));
}