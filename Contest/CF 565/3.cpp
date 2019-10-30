#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int num[]= {4,8,15,16,23,42};
map<int,int>mp1;

int main()
{
    int n;
    cin>>n;
    int a[n];
    mp[4]=0;
    mp[8]=0;
    mp[15]=0;
    mp[16]=0;
    mp[23]=0;
    mp[42]=0;

    mp1[4]=0;
    mp1[8]=1;
    mp1[15]=2;
    mp1[16]=3;
    mp1[23]=4;
    mp1[42]=5;
    int mark[n];
    for(int i=0; i<n; i++)
    {

        cin>>a[i];

        mp[a[i]]++;
        mark[i]=0;
        if(a[i]==4)
        {
            continue;
        }
        else
        {
           // cout<<a[i]<<" "<<mp[a[i]]<<endl;
            if(mp[a[i]]>mp[num[mp1[a[i]]-1]])
            {
                mp[a[i]]=mp[num[mp1[a[i]]-1]];
                mark[i]=-1;
            }

        }
    }

    int maxi=INT_MAX;
    for(auto x:mp)
    {
        maxi=min(maxi,x.second);
        mp[x.first]=0;
    }
    for(int i=0; i<n; i++)
    {
        if(mark[i]==-1){
            continue;
        }
        mp[a[i]]++;
        if(mp[a[i]]>maxi)
        {
            mark[i]=-1;
        }
       // cout<<mark[i]<<" ";

    }
    int co=0;
    for(int i=0;i<n;i++){
        if(mark[i]==-1){
            co++;
        }
    }
    cout<<co<<endl;




}
