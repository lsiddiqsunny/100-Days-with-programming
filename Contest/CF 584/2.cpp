#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int Time[n][10000];
    for(int i=0; i<n; i++)
    {
        memset(Time[i],0,sizeof(Time[i]));
        int a,b;
        cin>>a>>b;
        int now=s[i]-'0';
        // cout<<now<<endl;
        Time[i][0]=now;
        for(int j=1; j<b; j++)
        {
            Time[i][j]=Time[i][j-1];
        }
        for(int j=b; j<10000; j++)
        {
            if((j-b)%a==0){
                if(now==0){
                    now=1;
                }
                else now=0;
                Time[i][j]=now;
                continue;
            }
            Time[i][j]=Time[i][j-1];
            // cout<<Time[j]<<endl;

        }
    }

    int maxi=0;
    for(int i=0;i<10000;i++){
        int co=0;
        for(int j=0;j<n;j++){
            if(Time[j][i]==1){
                co++;
            }
        }
        maxi=max(maxi,co);
    }
    cout<<maxi<<endl;

}
