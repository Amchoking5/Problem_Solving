#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

#define ABS(a) (((a)>0)?(a):((-1)*(a)))

using namespace std;



int main(){
	int n,save1,save2,save3;
	long long int minvalue=5000000000;
	scanf("%d",&n);
	vector<long long int> arr(n);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	sort(arr.begin(),arr.end());
	
	for(int k=1;k<n-1;k++){
		int i=0;
		int j=n-1;
		while(!(i==k || k==j)){
			if(ABS(arr[i]+arr[j]+arr[k])<ABS(minvalue)){
				save1=i;
				save2=k;
				save3=j;
				minvalue=arr[i]+arr[j]+arr[k];
				if(ABS(arr[i+1]+arr[j]+arr[k])>ABS(arr[i]+arr[j-1]+arr[k])){
					j--;
				}
				else{
					i++;
				}
			}
			else{
				if(ABS(arr[i+1]+arr[j]+arr[k])>ABS(arr[i]+arr[j-1]+arr[k])){
					j--;
				}
				else{
					i++;
				}
	
			}
		}
	}
	
	printf("%d %d %d",arr[save1],arr[save2],arr[save3]);
	
}