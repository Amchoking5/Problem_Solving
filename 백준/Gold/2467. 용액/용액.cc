#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>

#define ABS(a) (((a)>0)?(a):((-1)*(a)))

using namespace std;

int main(){
	int n,m,save1,save2;
	int minvalue=2000000000;
	scanf("%d",&n);
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr.begin(),arr.end());
	int i=0, j=n-1;
	while(i<j){
		if(ABS(arr[i]+arr[j])<ABS(minvalue)){
			save1=i;
			save2=j;
			minvalue=arr[i]+arr[j];
			if(ABS(arr[i+1]+arr[j])>ABS(arr[i]+arr[j-1])){
				j--;
			}
			else{
				i++;
			}
		}
		else{
			if(ABS(arr[i+1]+arr[j])>ABS(arr[i]+arr[j-1])){
				j--;
			}
			else{
				i++;
			}

		}
	}
	printf("%d %d",arr[save1],arr[save2]);
}