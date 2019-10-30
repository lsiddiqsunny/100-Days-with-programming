#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    for(int cs=1; cs<=test; cs++)
    {
        string s;
        cin>>s;
        map<int,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]-'a']++;
        }
        vector<pair<int,int> > v;
        for(int i=0; i<26; i++)
        {
            if(mp.find(i)!=mp.end())
            {
                v.push_back(make_pair(i,mp[i]));
            }
        }
        if(v.size()%2==0)
        {

            int j=v.size()/2;
            int i=0;
            string ans="";
            while(1)
            {
                if(j>=v.size())
                {
                    break;
                }
                for(int k=0; k<v[j].second; k++)
                {
                    ans+=(char)('a'+v[j].first);
                }
                if(i<(v.size()/2))
                    for(int k=0; k<v[i].second; k++)
                    {
                        ans+=(char)('a'+v[i].first);
                    }
                j++;
                i++;

            }
            bool ok=true;
            for(int i=1; i<ans.size(); i++)
            {
                if(abs(ans[i-1]-ans[i])==1)
                {
                    ok=false;
                    break;
                }
            }
            //  cout<<ans<<endl;
            if(ok)
                cout<<ans<<endl;
            else
            {
                cout<<"No answer"<<endl;
            }
        }
        else
        {


            int j=(v.size()/2)+1;
            int i=0;
            string ans="";
            while(1)
            {
                if(i>(v.size()/2))
                {
                    break;
                }
                for(int k=0; k<v[i].second; k++)
                {
                    ans+=(char)('a'+v[i].first);
                }
                if(j<(v.size()))
                    for(int k=0; k<v[j].second; k++)
                    {
                        ans+=(char)('a'+v[j].first);
                    }

                j++;
                i++;

            }
            bool ok=true;
            for(int i=1; i<ans.size(); i++)
            {
                if(abs(ans[i-1]-ans[i])==1)
                {
                    ok=false;
                    break;
                }
            }
          //  cout<<ans<<endl;
            if(ok)
                cout<<ans<<endl;
            else
            {
                cout<<"No answer"<<endl;
            }


        }
    }

}
