#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int l,c,count=0;
vector<int> v;
char letter[20];


void password(int now,int count,int a,int b){
	if(now>c) return;
	if(count==l){
		if(a>0 && b>1){
			for(int i=0;i<l;i++){
				printf("%c",letter[i]);
			}
			printf("\n");
		}
		return;
	}
	letter[count]=v[now];
	if(v[now]=='a' || v[now]=='e' || v[now]=='i' || v[now]=='o' || v[now]=='u'){
		password(now+1,count+1,a+1,b);
	}
	else{
		password(now+1,count+1,a,b+1);
	}
	password(now+1,count,a,b);
	
}

int main(){
	int a;
	scanf("%d %d",&l,&c);
	for(int i=0;i<c;i++){
		char a;
		cin >> a;
		v.push_back(a);
	}
	
	sort(v.begin(),v.end());
	
	password(0,0,0,0);
}