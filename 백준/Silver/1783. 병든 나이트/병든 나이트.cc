#include <stdio.h>

int n,m;

int main(){
	scanf("%d %d",&n,&m);
	if(n==1 || m==1) printf("1");
	else if(n==2 && m==2) printf("1");
	else if(n==2 && (m==3 || m==4)) printf("2");
	else if(n==2 && (m==5||m==6))printf("3");
	else if(n==2 && m>6) printf("4");
	else if(m==2) printf("2");
	else if(m==3) printf("3");
	else if(m==4) printf("4");
	else if(m==5 || m==6) printf("4");
	else printf("%d",m-2);
}