#include<bits/stdc++.h>

using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        string s;
        cin>>s;
        int n=s.size();
        int co[n+2][4];
        memset(co,0,sizeof(co));
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                co[i+1][0]+=co[i][0]+1;
                co[i+1][1]=co[i][1];
            }
            else
            {
                co[i+1][1]+=co[i][1]+1;
                co[i+1][0]=co[i][0];

            }
        }

        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                co[i+1][2]+=co[i+2][2]+1;
                co[i+1][3]=co[i+2][3];
            }
            else
            {
                co[i+1][3]+=co[i+2][3]+1;
                co[i+1][2]=co[i+2][2];

            }
        }
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            cout<<co[i][0]<<" "<<co[i][1]<<" "<<co[i][2]<<" "<<co[i][3]<<endl;
            if(co[i][1]*co[i][1]==co[i][0])
            {
                ans++;
            }
            if(co[i][3]*co[i][3]==co[i][2])
            {
                ans++;
            }


        }
        cout<<ans<<endl;
    }

}

