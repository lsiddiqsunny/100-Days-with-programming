#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans = 1;
    for(int i=2;i<=n;i++){
        if(i*2<=n){
            ans = max(ans,i);
        }
    }
    cout<<ans<<endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}