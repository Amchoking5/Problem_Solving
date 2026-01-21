#include <stdio.h>
#include <vector>

using namespace std;

int lis=1;
int lastmin[1000005]={-1000000001,0};
pair<int,int> path[1000005];
int lisarr[1000005];
int lastmax=-1000000001;
//길이가 i인 부분수열 중 마지막값의 최솟 값 

int main(){
	int n,a;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		path[i]={-1000000001,-1000000001};
		scanf("%d",&a);
		bool same=false;
		int left=0,right=lis-1,mid;
		
		if(lis==0){
			lastmin[lis]=a;
			lis++;
		}
		else if(lastmin[lis-1]<a){
			lastmax=a;
			path[i]={a,lastmin[lis-1]};
			lastmin[lis]=a;
			lis++;
		}
		else{
			while(left<=right){
				mid=(left+right)/2;
				if(lastmin[mid]>a){
					
					right=mid-1;
				}
				else if(lastmin[mid]==a){
					same=true;
					break;
				}
				else{
					if(lastmin[mid+1]>a){
						break;
					}
					left=mid+1;
				}
				
			}
			if(!same){
				path[i]={a,lastmin[mid]};
				lastmin[mid+1]=a;
			}

		}
	}
	
	int count=lis-1;
	for(int i=n-1;i>=0;i--){
		if(count==0) break;
		if(lastmax==path[i].first){
			lastmax=path[i].second;
			lisarr[count]=path[i].first;
			count--;
		}
	}
	
	printf("%d\n",lis-1);
	
	for(int i=1;i<lis;i++){
		printf("%d ",lisarr[i]);
	}
}