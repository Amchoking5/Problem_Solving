#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

struct Time{
	int start;
	int end;
};

bool compare(const Time &a , const Time &b){
    if(a.end==b.end){
        return a.start<b.start;
    }
	return a.end<b.end;
}
int main(){
	int n,min=0,count=0;
	scanf("%d",&n);
	
	Time *time = new Time[n];
	
	for(int i=0;i<n;i++){
		scanf("%d %d",&time[i].start,&time[i].end);
	}
	
    sort(time , time+n , compare);
    
    for(int i=0;i<n;i++){
		if(min<=time[i].start){
		    count++;
		    min=time[i].end;
		}		
	}
	printf("%d",count);
}