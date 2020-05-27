#include<bits/stdc++.h>
using namespace std;
struct period{
    int st,en,id;
};

bool cmp(period a,period b){
    if(a.st!=b.st){
        return a.st<b.st;
    }
    else if(a.en!=b.en){
        return a.en<b.en;
    }
    else{
        return a.id<b.id;
    }
}

bool check(vector<period> p, period a){
    for(int i=0;i<p.size();i++){
        if(a.st>=p[i].st and a.st<p[i].en){
            return false;
        }
    }
    return true;
}
int main(){
    int  t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        int n;
        cin>>n;
        string ans;
        for(int i=0;i<n;i++){
            ans+='A';
        }
        vector<period>p;
        vector<period>j;
        vector<period>c;
        for(int i=0;i<n;i++){
            int s,e;
            cin>>s>>e;
            period x;
            x.st=s;
            x.en=e;
            x.id=i;
            p.push_back(x);
        }
        sort(p.begin(),p.end(),cmp);
        bool ok=true;
        for(int i=0;i<n;i++){
            bool v=check(j,p[i]);
            if(v){
                ans[p[i].id]='J';
                j.push_back(p[i]);
            }
            else{
                v=check(c,p[i]);
                if(v){
                    ans[p[i].id]= 'C';
                    c.push_back(p[i]);
                }
                else{
                    ok=false;
                    break;
                }
            }
        }
        if(ok){
            cout<<"Case #"<<cs<<": "<<ans<<endl;
        }
        else{
            cout<<"Case #"<<cs<<": "<<"IMPOSSIBLE"<<endl;
        }
    }
}