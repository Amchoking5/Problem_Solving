#include <stdio.h>
#include <vector>

using namespace std;

int n;
vector<int> connect[10];
long long int total[100004][9]={0};


int main(){
	total[0][1]=1;
	
	connect[1].push_back(2);
	connect[1].push_back(8);
	
	connect[2].push_back(1);
	connect[2].push_back(3);
	connect[2].push_back(8);
	
	connect[3].push_back(2);
	connect[3].push_back(4);
	connect[3].push_back(8);
	connect[3].push_back(7);
	
	connect[4].push_back(3);
	connect[4].push_back(5);
	connect[4].push_back(7);
	
	connect[5].push_back(4);
	connect[5].push_back(6);
	
	connect[6].push_back(5);
	connect[6].push_back(7);
	
	connect[7].push_back(3);
	connect[7].push_back(4);
	connect[7].push_back(6);
	connect[7].push_back(8);
	
	connect[8].push_back(1);
	connect[8].push_back(2);
	connect[8].push_back(3);
	connect[8].push_back(7);
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=8;j++){
			for(int k=0;k<connect[j].size();k++){
				total[i][j]+=total[i-1][connect[j][k]];
				total[i][j]=total[i][j]%1000000007;
			}
		}
	}
	printf("%lld",total[n][1]);
}