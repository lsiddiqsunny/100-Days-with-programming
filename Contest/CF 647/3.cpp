#include <bits/stdc++.h>
using namespace std;
int find(unsigned long long int n){
    unsigned long long co=1;
    for(int i=0;;i++){
        if(n<co){
            return i-1;
        }
        else if(n==co){
            return i;
        }
        co*=2ull;
    }
}

unsigned long long int solution(unsigned long long int n)
{
    //cout<<n<<endl;
    if(n<=0){
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 3;
    }
    int co = find(n);
    unsigned long long ans = ((1ull << (co + 1)) - 1);
   // cout<<ans<<endl;
    ans += solution(n - (1ull << co));
    return ans;
}
void solve()
{
    unsigned long long int n;
    cin >> n;
    cout << solution(n) << endl;
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