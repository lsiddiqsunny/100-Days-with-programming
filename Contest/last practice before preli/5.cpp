#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n, k,ans=0;
	cin >> n >> k;
	n *= 2, k *= 2;
	ans = (n + k - 1) / k;
	ans *= 5*1ll;
	if(ans<=5){
        ans=10;
	}
	cout << ans;


}
