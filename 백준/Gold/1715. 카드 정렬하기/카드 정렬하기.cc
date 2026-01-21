#include <stdio.h>
#include <queue>

using namespace std;

long long int sum=0;
priority_queue<int> pq;

int main(){
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		pq.push(-a);
	}
	while(1){
		int num1,num2;
		num1=pq.top();
		pq.pop();
		if(pq.empty()){
			break;
		}
		num2=pq.top();
		pq.pop();
		sum=sum-(num1+num2);
		pq.push(num1+num2);
	}
	printf("%lld",sum);
}