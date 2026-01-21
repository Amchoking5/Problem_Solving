#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int arr[100];
int func(int a, int b);
int main()
{
    vector<int>v;
 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int gcd = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    
         gcd = func(gcd, arr[i] - arr[i - 1]);
    
    //gcd=최대 공약수
    
    //최대 공약수의 공약수 => 답
    for (int i = 1; i * i <= gcd; i++)
    {
        if (i == 1)    
            v.push_back(gcd);
        else
        {
            if (gcd % i == 0) {
                v.push_back(gcd / i);
                //같은 수를 걸러내는 작업
                if((gcd/i)!=i)
                v.push_back(i);
            
            }
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << '\n';
    return 0;
}
int func(int a, int b)
{
    int c;
    while (b)
    {
        c = a;
        a = b;
        b = c % a;
    }
    return a;
}