#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

struct Where{
	int x;
	int y;
};

int getmax(int a, int b) { return a > b ? a : b; }

bool compare(const Where &a , const Where &b){
	return a.x<b.x;
}
int main(){
	int n,maxvalue=0;
	scanf("%d",&n);
	int counts[n]={0};
	Where *where = new Where[n];
	
	for(int i=0;i<n;i++){
		scanf("%d %d",&where[i].x,&where[i].y);
	}
	
    sort(where , where+n , compare);
	
	for(int i=0;i<n;i++){
		counts[i]=1;
		for(int j=0;j<i;j++){
			if(where[j].y<where[i].y){
				if(counts[i]<counts[j]+1){
					counts[i]=counts[j]+1;
				}
			}
			maxvalue=getmax(maxvalue,counts[i]);
		}
	}
	printf("%d",n-maxvalue);
}