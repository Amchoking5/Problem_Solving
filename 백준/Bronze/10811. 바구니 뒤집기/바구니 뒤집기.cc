#include <stdio.h>
int main(){
	int n, m,a,b,c=1, d,e, i, j, arr[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++){
		arr[i] = c;
		c++;
	}
	c = 0;
	for (i = 0; i<m; i++){
		scanf("%d %d",&a,&b);
		e = (a + b) / 2;
		for (j = a-1; j <= e-1; j++){
			d = arr[j];
			arr[j] = arr[b + c-1];
			arr[b + c-1] = d;
			c--;
		}
		c = 0;
	}
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}