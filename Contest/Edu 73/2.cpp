#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        int ans[n][n];
        memset(ans,0,sizeof(ans));

        int now=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {

                ans[i][j]=now;
                if(now==0)
                {
                    now=1;

                }
                else
                    now=0;
            }
        }
        for(int i=0; i<n; i++)
        {
            ans[n/2][i]=1;
            ans[i][n/2]=1;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ans[i][j]==0)
                {
                    cout<<"W";
                }
                else
                {
                    cout<<"B";
                }
            }
            cout<<endl;
        }


    }
    else
    {
        int ans[n][n];
        memset(ans,0,sizeof(ans));

        int now=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {

                ans[i][j]=now;
                if(now==0)
                {
                    now=1;

                }
                else
                    now=0;
            }
            if(now==0)
            {
                now=1;

            }
            else
                now=0;

        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ans[i][j]==0)
                {
                    cout<<"W";
                }
                else
                {
                    cout<<"B";
                }
            }
            cout<<endl;
        }
    }



}
