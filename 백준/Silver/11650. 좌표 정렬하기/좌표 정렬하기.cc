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

bool compare(const Where &a , const Where &b){
	if(a.x==b.x){
		return a.y<b.y;
	}
	return a.x<b.x;
}
int main(){
	int n;
	scanf("%d",&n);
	
	Where *where = new Where[n];
	
	for(int i=0;i<n;i++){
		scanf("%d %d",&where[i].x,&where[i].y);
	}
	
    sort(where , where+n , compare);
    
    for(int i=0;i<n;i++){
		printf("%d %d\n",where[i].x,where[i].y);		
	}
}