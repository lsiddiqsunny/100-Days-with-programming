#include<bits/stdc++.h>
using namespace std;
vector<long long int>a;
int n;
long long k;
int ok(int mid)
{

    for(int i=0; i<a.size(); i++)
    {
        if(abs(a[i]-mid)>k)
        {
            return i;
        }

    }
    return n;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {


        cin>>n>>k;
        a.clear();
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        long long int lo=max(1LL,a[n-1]-k);
        long long int hi=a[n-1]+k;
        long long int mid;
        long long int ans=-1;
        while(lo<=hi)
        {
            mid=(lo+hi+1)/2.0;
            /// cout<<mid<<endl;
            if(ok(mid)==n)
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
