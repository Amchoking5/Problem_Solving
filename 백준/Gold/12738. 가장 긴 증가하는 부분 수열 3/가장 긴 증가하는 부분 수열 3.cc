#include <stdio.h>

int lis=1;
int lastmin[1000005]={-1000000001};
//길이가 i인 부분수열 중 마지막값의 최솟 값 

int main(){
	int n,a;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		bool same=false;
		int left=0,right=lis-1,mid;
		
		if(lis==0){
			lastmin[lis]=a;
			lis++;
		}
		else if(lastmin[lis-1]<a){
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
				lastmin[mid+1]=a;
			}

		}
	}


	
	printf("%d",lis-1);

}