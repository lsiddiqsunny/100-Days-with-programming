#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b;
    cin>>a>>b;
    long long mini=min(a,b),maxi=max(a,b);
    if(maxi%mini==0){
        int co=0;
        while(maxi!=mini){
            if(maxi%2!=0){
                break;
            }
            maxi/=2;
            co++;
        }
        if(maxi!=mini){
            cout<<-1<<endl;
            return;
        }
        int ans = (int)(co/3);
        co = co-ans*3;
        ans+=(int)(co/2);
        ans+=(co%2==1);
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;

    }

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