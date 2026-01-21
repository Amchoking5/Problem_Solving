#include <cstdio>
#include <map>
#include <iostream>
#include<string>
using namespace std;
int main(){
	map<string, int>a;
	a["black"] = 0;
	a["brown"] = 1;
	a["red"] = 2;
	a["orange"] = 3;
	a["yellow"] = 4;
	a["green"] = 5;
	a["blue"] = 6;
	a["violet"] = 7;
	a["grey"] = 8;
	a["white"] = 9;
	char p[10];
	scanf("%s", p);
	long long int t1;
	t1 = a[p];

	map<string, int>b;
	b["black"] = 0;
	b["brown"] = 1;
	b["red"] = 2;
	b["orange"] = 3;
	b["yellow"] = 4;
	b["green"] = 5;
	b["blue"] = 6;
	b["violet"] = 7;
	b["grey"] = 8;
	b["white"] = 9;
	char q[10];
	scanf("%s", q);
	long long int t2;
	t2 = b[q];

	map<string, int>c;
	c["black"] = 1;
	c["brown"] = 10;
	c["red"] = 100;
	c["orange"] = 1000;
	c["yellow"] = 10000;
	c["green"] = 100000;
	c["blue"] = 1000000;
	c["violet"] = 10000000;
	c["grey"] = 100000000;
	c["white"] = 1000000000;
	char r[10];
	scanf("%s", r);
	long long int t3;
	t3 = c[r];

	printf("%lld", ((t1 * 10) + t2)*t3);
	return 0;
}