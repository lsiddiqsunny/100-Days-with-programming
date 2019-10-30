#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    int mark[n];
    for(int i=0; i<n; i++)
    {
        mark[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        if(i+1<n and s[i]!=s[i+1])
        {
            i++;
            continue;
        }
        // cout<<s[i]<<endl;
        int j=i+1;
        while(j<n and s[i]==s[j])
        {
            mark[j]=-1;
            j++;
        }
        i=j;

    }
    string ans="";
    for(int i=0; i<n; i++)
    {
        if(mark[i]!=-1)
        {
            ans.push_back(s[i]);
        }
    }


    if(ans.size()%2==1)
    {
        ans.pop_back();
    }

    memset(mark,sizeof(mark),0);



    cout<<n-ans.size()<<endl;
    cout<<ans<<endl;


}
