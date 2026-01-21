#include <stdio.h>
#include <iostream>
#include <algorithm>

#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int ropes[100001];

int main(){
	int n,maxw=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&ropes[i]);
	}
	sort(ropes,ropes+n);
	for(int i=0;i<n;i++){
		maxw=MAX(maxw,ropes[i]*(n-i));
	}
	printf("%d",maxw);
}