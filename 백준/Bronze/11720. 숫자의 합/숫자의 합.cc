#include <stdio.h>

int main(){
	int n,sum=0;
	scanf("%d",&n);
	char st[n];
	scanf("%s",&st);
	for(int i=0;i<n;i++){
		sum+=st[i]-'0';
	}
	printf("%d",sum);
}