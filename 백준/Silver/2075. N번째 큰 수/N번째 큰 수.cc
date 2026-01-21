#include <stdio.h>
#include <queue>

using namespace std;

priority_queue<long long int> pq;
int n;

int main(){
	int size=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			long long int a;
			scanf("%lld",&a);
			if(size<n){
				pq.push(-a);
				size++;
			}
			else{
				long long int minv = pq.top();
				if(-a<minv){
					pq.pop();
					pq.push(-a);
				}
			}
		}
	}

	printf("%lld",-pq.top());
}