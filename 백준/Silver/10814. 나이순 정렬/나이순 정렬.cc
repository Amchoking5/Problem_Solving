#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

struct Info{
	int age;
	int count;
	char arr[101];
};

bool compare(const Info &a , const Info &b){
	if(a.age==b.age){
		return a.count < b.count;
	}
	return a.age < b.age;
}

int main(){
	int n;
	scanf("%d",&n);
	
	Info *ainfo = new Info[n];
	
	for(int i=0;i<n;i++){
		scanf("%d %s",&ainfo[i].age,ainfo[i].arr);
		ainfo[i].count=i;
	}
	
    sort(ainfo , ainfo+n , compare);
    
    for(int i=0;i<n;i++){
		printf("%d %s\n",ainfo[i].age,ainfo[i].arr);		
	}
}