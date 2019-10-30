#include<bits/stdc++.h>
using namespace std;

#define N 100005
#define M 26
set<int>tab[M];

int main(){
    string s;
    cin>>s;
    int sz=s.size();
    for(int i=0;i<sz;i++){
        int now=s[i]-'a';
        tab[now].insert(i);

    }
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==2){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            int co=0;
            for(int i=0;i<26;i++){
                auto it=tab[i].lower_bound(l);
                if(it!=tab[i].end() and *it<=r){
                    co++;
                }
            }
            cout<<co<<endl;

        }
        else{
            int pos;
            char ch;
            cin>>pos>>ch;
            int pres=s[pos-1]-'a';
            tab[pres].erase(pos-1);
            int now=ch-'a';
            s[pos-1]=ch;
            tab[now].insert(pos-1);

        }
    }


}