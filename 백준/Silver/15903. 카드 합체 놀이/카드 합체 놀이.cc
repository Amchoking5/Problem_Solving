#include <stdio.h>
#include <queue>

using namespace std;

priority_queue<long long int> pq;

int main(){
	long long int n,m,a;
	long long int sum=0;
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%lld",&a);
		pq.push(-a);
		sum+=a;
	}
	for(int i=0;i<m;i++){
		long long int num1,num2;
		num1=pq.top();
		pq.pop();
		num2=pq.top();
		pq.pop();
		sum-=(num1+num2);
		pq.push(num1+num2);
		pq.push(num1+num2);
	}
	printf("%lld",sum);
}