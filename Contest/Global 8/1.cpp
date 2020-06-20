#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b, n;
    cin >> a >> b >> n;
    int co = 0;
    int turn = 1;
    if(a>b){
        swap(a,b);
    }
    while (b <= n)
    {
        co++;

            a += b;
            swap(a,b);
    }
    
    // cout<<a<<" "<<b<<endl;
    cout << co << endl;
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