#include<bits/stdc++.h>
using namespace std;
set<string>pass;
set<string>rem;

bool ok(string p,vector<string>&ans)
{
    if(rem.find(p)!=rem.end())
    {
        return false;
    }
    if(pass.find(p)!=pass.end())
    {
        ans.push_back(p);
        return true;
    }
    else
    {
        rem.insert(p);
    }
    bool log=false;
    for(int i=0; i<p.size(); i++)
    {
        string l="";
        for(int k=0;k<i;k++){
            l.push_back(p[k]);
        }
        string r="";
        for(int k=i;k<p.size();k++){
            r.push_back(p[k]);
        }
        cout<<l<<" "<<r<<endl;
        bool l1=ok(l,ans);
        bool r1=ok(r,ans);
        if(l1 and r1)
        {
            log=true;
        }
        else
            log=false;
        if(log)
        {
            return true;
        }
    }
    return log;


}
int main()
{
    int t;
    cin>>t;
    vector<string>ans;
    while(t--)
    {
        pass.clear();
        rem.clear();
        ans.clear();
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            pass.insert(s);
        }
        string mainpass;
        cin>>mainpass;
        if(ok(mainpass,ans))
        {
            for(int i=0; i<ans.size(); i++)
            {
                cout<<ans[i];
                if(i<ans.size()-1)
                {
                    cout<<" ";
                }
                else
                    cout<<endl;
            }
        }
        else
        {

            cout<<"WRONG PASSWORD"<<endl;
        }

    }

}
