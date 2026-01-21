#include <stdio.h>
#include <algorithm>
int arr[100000],d,e;
using namespace std;
int f(int a){
	if (arr[a] % d == 0){
		return d;
	}
	else{
		e = d;
		d = arr[a] % d;
		arr[a] = e;
		return f(a);
	}
}
bool compare(int a, int b){
	return a < b;
}
int main() {
	int a, i;
	int a1, a2, b,c,g;
	scanf("%d", &a);
	for (i = 0; i < a; i++){
		if (i == 0){
			scanf("%d", &b);
			a1 = b;
		}
		else {
			scanf("%d", &c);
			arr[i] = c - b;
			b = c;
			if (i == a - 1){
				a2 = c;
			}
		}
	}
	sort(arr, arr + a - 1, compare);
	d = arr[1];
	for (i = 2; i < a; i++){
		d = f(i);
	}
	g = (a2 - a1) / d + 1 - a;
	printf("%d", g);
	return 0;
}