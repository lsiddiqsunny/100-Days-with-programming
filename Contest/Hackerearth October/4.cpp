#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
int  ff(int n,int k)
{
    if(k==0)
    {
        ans.push_back(1);
        cout<<1<<endl;
        return 1;
    }
    if(k<=n/2)
    {
        int now=2*ff(n/2,k)-1;
        cout<<now<<endl;
        return now;
    }
    else
    {
        int now=2*ff((n-1)/2,k-1-n/2);
        cout<<now<<endl;
        return now;
    }

}
int main()
{
    ff(5,2);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int n,k;
    cin>>n>>k;
    if(n>1 and k==1)
    {
        cout<<"No"<<endl;
        return 0;
    }

    int rem=n-k;
    if(rem<=k)
    {
        vector<int>f,l;
        for(int i=k+1; i<=n; i++)
        {
            f.push_back(i);
        }
        for(int i=1; i<=k; i++)
        {
            l.push_back(i);
        }
        cout<<"Yes\n";
        for(int i=0; i<f.size(); i++)
        {
            cout<<f[i]<<" ";
        }
        for(int i=0; i<l.size(); i++)
        {
            cout<<l[i]<<" ";
        }
    }
    else
    {
        vector<int>f,l;
        for(int i=k+1; i<=n; i++)
        {
            f.push_back(i);
        }
        for(int i=1; i<=k; i++)
        {
            l.push_back(i);
        }
        cout<<"Yes\n";
        for(int i=0; i<f.size(); i++)
        {
            cout<<f[i]<<" ";
        }
        for(int i=0; i<l.size(); i++)
        {
            cout<<l[i]<<" ";
        }
    }

}
