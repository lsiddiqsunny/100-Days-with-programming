#include<bits/stdc++.h>
using namespace std;


#define N 1000005
#define mod 1000000007
long long int two[N];

int main()
{
    freopen("class_treasurer.txt","r",stdin);
    freopen("output.txt","w",stdout);



    two[0] = 1;

    for(int i=1 ; i<N; i++)
        two[i] = ((two[i-1]%mod)*(2LL%mod))%mod;

    int t;
    cin>>t;

    for(int cs=1; cs<=t; cs++)
    {

        long long int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        long long int ans = 0,now=0, mini = 0;

        for(int i=n-1; i>=0 ; i--)
        {

            if(s[i]=='A')
            {
                now--;
                mini = min(mini, now);

            }
            else
            {
                now++;
                if(now-mini > k)
                {
                    ans = (ans%mod+two[i+1]%mod)%mod;
                    now -= 2;
                }

                mini = min(mini, now);
            }
        }

        printf("Case #%d: %lld\n",cs,ans);
    }

    return 0;

}
