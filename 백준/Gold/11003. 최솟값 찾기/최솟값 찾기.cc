#include <queue>
#include <iostream>
using namespace std;
int n, l;
typedef pair<int, int> P;
priority_queue<P,vector<P>,greater<P>> pq;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		pq.push({ a,i });
		while (pq.top().second < i - l+1){
            pq.pop();
        }
		cout << pq.top().first << ' ';
	}
}