#include<bits/stdc++.h>
using namespace std;

long long mod=1000000007 ;
int main()
{
    // cout<<mod+797922655<<endl;
    long long h,w;
    cin>>h>>w;
    long long a[h],b[w];
    for(int i=0; i<h; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<w; i++)
    {
        cin>>b[i];
    }
    long long  grid[h][w];
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            grid[i][j]=-1;
        }
    }

    bool ok=true;
    for(int i=0; i<h; i++)
    {
        if(a[i]==0)
        {
            grid[i][0]=0;
        }
        else
        {
            for(int j=0; j<a[i]; j++)
            {
                grid[i][j]=1;
            }

        }
    }

    for(int i=0; i<w; i++)
    {
        if(b[i]==0)
        {
            if(grid[0][i]==-1||grid[0][i]==0)
                grid[0][i]=0;
            else
            {
                ok=false;
                break;
            }
        }
        else
        {
            for(int j=0; j<b[i]; j++)
            {
                if(grid[j][i]==0)
                {
                    ok=false;
                    break;


                }
                grid[j][i]=1;
            }

        }
    }
    if(ok==false)
    {
        cout<<0<<endl;
        return 0;
    }

    long long int ans=1;
    int mark1[h],mark2[w];
    for(int i=0;i<w;i++){
        mark2[i]=INT_MAX;
    }
    for(int i=0; i<h; i++)
    {
        bool ok=false;
        mark1[i]=INT_MAX;

        for(int j=0; j<w; j++)
        {

            if(grid[i][j]==-1 )
            {
                mark1[i]=min(mark1[i],j);
                mark2[j]=min(mark2[j],i);
            }

            // cout<<grid[i][j]<<" ";
        }
        //cout<<endl;
    }
    long long int ans1=1;
    for(int i=0; i<h; i++)
    {
        //  bool ok=false;
        for(int j=0; j<w; j++)
        {
            if(grid[i][j]==-1 and mark1[i]<j and mark2[j]<i)
            {
                ans1*=2;
                ans1%=mod;
            }

        }
    }
    cout<<(ans1)%mod<<endl;

}
