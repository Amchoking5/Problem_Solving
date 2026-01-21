#include <stdio.h>
#include <vector>

using namespace std;

long long int n,check;
bool a[1000001]={true,true,false};
vector<long long int> p;
vector<long long int> v;

void make_a(long long int i){
	if(a[i]) return;
	long long int check=i*2;
	while(check<1000001){
		a[check]=true;
		check+=i;
	}
}

int main(){
	for(long long int i=2;i<1000001;i++){
		make_a(i);
		if(!a[i]) p.push_back(i);
	}
	scanf("%lld",&n);
	check=n;
	if(n==1){
		printf("1");
		return 0;
	}
	long long int now=0;
	for(long long int i=0;i<p.size();i++){
		while(n%p[i]==0){
			n=n/p[i];
			if(now!=p[i]){
				now=p[i];
				v.push_back(p[i]);
			}
		}
		if(n==1) break;
	}
	if(n!=1) v.push_back(n);
	for(long long int i=0;i<v.size();i++){
		check=check/v[i]*(v[i]-1);
	}
	printf("%lld",check);
}