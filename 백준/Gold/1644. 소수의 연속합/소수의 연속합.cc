#include <stdio.h>
#include <queue>

using namespace std;

#define MIN(a,b) (((a)>(b))?(b):(a))

queue<int> qu;
vector<int> arr;
bool nums[4000001]={false};

void pcheck(int end){
	int i=2;
	nums[2]=false;
	while(i<=end){
		if(!nums[i]){
			int j=i;
			qu.push(i);
			while(j<=end){
				nums[j]=true;
				j+=i;
			}
		}
		i++;
	}
}

int main(){
	int m,count=0,sum;
	scanf("%d",&m);
    if(m==1){
        printf("0");
        return 0;
    }
	pcheck(m);
	while(!qu.empty()){
		arr.push_back(qu.front());
		qu.pop();
	}
	int i=0,j=0;
	int n=arr.size();
	sum=arr[0];
	while(j<n){
		if(sum==m){
			count++;
			j++;
			if(j>=n){
				break;
			}
			sum=sum+arr[j];
		}
		else if(sum>m){
			sum=sum-arr[i];
			i++;
		}
		else{
			j++;
			if(j>=n){
				break;
			}
			sum=sum+arr[j];
		}
	}
	printf("%d",count);
}