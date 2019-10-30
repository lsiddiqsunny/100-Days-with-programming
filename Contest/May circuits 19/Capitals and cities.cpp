#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long long k;
    cin>>n>>k;
    long long a[n];
    vector<pair<long long,int> > v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back(make_pair(a[i],i+1));
    }
    sort(v.begin(),v.end());
    if(n==1)
    {
        cout<<1<<" "<<k%2<<endl;
        return 0;
    }
    int idx=(n)/2;
    long long num=v[idx].first;
    int ans=v[idx].second;

    long long sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=abs(a[i]-num);
    }

    if(k<=sum)
        sum=sum-k;
    else
    {
        sum=(k-sum)%2;
    }


    int idx1=(n-1)/2;
    long long num1=v[idx1].first;
    int ans1=v[idx1].second;

    long long sum1=0;
    for(int i=0; i<n; i++)
    {
        sum1+=abs(a[i]-num1);
    }
    if(k<=sum1)
        sum1=sum1-k;
    else
    {
        sum1=(k-sum1)%2;
    }
    if(sum1==sum)
    {
        // cout<<ans1<<endl;
        if(ans<ans1)
        {
            cout<<ans<<" "<<sum<<endl;
        }
        else
        {
            cout<<ans1<<" "<<sum<<endl;
        }
    }
    else if(sum<sum1)
    {
        cout<<ans<<" "<<sum<<endl;

    }
    else
    {
        cout<<ans1<<" "<<sum1<<endl;
    }





}
