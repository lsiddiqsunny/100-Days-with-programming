#include<bits/stdc++.h>
using namespace std;
bool ok(int mid,int c,int m,int x)
{
    int team;
    c-=mid;
    m-=mid;
    team=mid;
    int now=c+m+x;
    now-=mid;
    if(now<0 || c<0 || m<0)
    {
        return false;
    }
    return true;

}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int c,m,x;
        cin>>c>>m>>x;
        int ans=min(c,m);
        int lo=0,hi=ans;
        int mid;
        while(lo<=hi)
        {
            mid=lo+(hi-lo)/2;
            //  cout<<mid<<endl;
            if(ok(mid,c,m,x))
            {
                ans=mid;
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
    }

}
