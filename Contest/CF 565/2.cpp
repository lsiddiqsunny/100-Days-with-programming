#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]%=3;
        }
        int p[3];
        for(int i=0; i<3; i++)
        {
            p[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            p[a[i]]++;
        }
        int ans=p[0];
        if(p[1]<p[2])
        {
            ans+=p[1];
            p[2]-=p[1];
            ans+=(p[2]/3);
        }
        else
        {
            ans+=p[2];
            p[1]-=p[2];
            ans+=(p[1]/3);

        }
        cout<<ans<<endl;

    }


}
