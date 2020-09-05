#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        long long ans = 1e18;
		for (int i = 0; i < 2; ++i) {
			long long int da = min(n, a - x);
			long long int db = min(n - da, b - y);
			ans = min(ans, (a - da) *(b - db));
			swap(a, b);
			swap(x, y);
		}
		cout << ans << endl;
    }
}