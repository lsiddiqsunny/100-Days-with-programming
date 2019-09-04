#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    long long ta,tb;
    int k;
    cin>>n>>m>>ta>>tb>>k;
    if(k>=n || k>=m)
    {
        cout<<-1<<endl;
        return 0;
    }
    vector<long long> a,b;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        long long x;
        cin>>x;
        b.push_back(x);
    }

    for(int i=0; i<n; i++)
    {
        a[i]+=ta;

    }
    long long ans=LLONG_MAX;
    int remk=k;
    int remi=-1;
    for(int i=0; i<m; i++)
    {
        int low=upper_bound (a.begin(), a.end(), b[i])-a.begin();
        if(low==0)
        {
            continue;
        }
        if(low==n)
        {
            remi=i;
            break;
        }
        int j=i;
        int co=1;
        while(j<m)
        {
            int low1=upper_bound (a.begin(), a.end(), b[j])-a.begin();
            if(low1==low)
            {
                co++;
            }
            else
                break;
            j++;
        }
        if(co>1)

        {
            //
            if(k>0)
            {
                if(j<m)
                {
                    ans=min(ans,b[j]+tb);
                }
                if(j==m)
                {
                    ans=-1;
                }
                i=j-1;
                k--;

            }
        }

    }
      cout<<k<<endl;
    while(remi!=-1 and remi<m and k)
    {
        k--;
        remi++;
        ans=b[remi]+tb;
    }

    if(remi!=-1 and remi<m and k)
    {
        ans=-1;
    }
    if(ans==LLONG_MAX)
    {
        ans=-1;
    }


    cout<<ans<<endl;



}

/*
4 3 2 3 1
1 999999999 1000000000 1000000001
3 4 1000000000
*/
