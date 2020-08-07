#include<bits/stdc++.h>
using namespace std;
void ch(int i){
    //cout<<"here"<<i<<endl;
}
bool check(set<pair<int, int> > s) {
    bool square=false;
    int Pair=0;
    set<pair<int, int> >::reverse_iterator rit;
    for (rit=s.rbegin(); rit!=s.rend(); ++rit)
    {
        int f=(*rit).first;
        if (!square and f<4) {
            ch(1);
            return false;
        }
        if (!square and f>=4) {
            square=true;
            int now = f-4;
            if (now>=4) {ch(2);
                return true;
            }
            else if (now>=2) {
                Pair++;
                continue;
            }
            else {
                Pair=0;ch(3);
                continue;
            }
        }
        if (square and Pair==0 and f<2) {ch(4);
            return false;
        }
        if (square and Pair==0 and f>=4) {ch(5);
            return true;
        }
        if (square and Pair==0 and f>=2) {ch(6);
            Pair++;
            continue;
        }
        if (square and Pair==1 and f<2) {ch(7);
            return false;
        }
        if (square and Pair==1 and f>=2) {ch(8);
            return true;
        }

    }ch(9);
    return false;
}
void solve() {
   // ios_base::sync_with_stdio(0), cin.tie(0);
    int n;
    cin>>n;
    map<int, int>mp;
    for (int i=0;i<n;i++)
    {
        int x=i+1;
        //cin>>x;
        mp[x]++;
        //        cin>>a[i];

    }//cout<<"here\n";
    set<pair<int, int> >s;
    for (auto p: mp) {
        //cout<<p.second<<" "<<p.first<<endl;
        s.insert(make_pair(p.second, p.first));
    }


    int q;
    cin>>q;
    while (q--) {
        
        char type;
        cin>>type;
        int x;
        cin>>x;
        if (type=='+') {
            if (mp.find(x)!=mp.end()) {
                s.erase(s.find(make_pair(mp[x], x)));
                mp[x]++;
                s.insert(make_pair(mp[x], x));

            }
            else {
                mp[x]++;
                s.insert(make_pair(mp[x], x));
            }
            
        }
        else {

            s.erase(s.find(make_pair(mp[x], x)));
            mp[x]--;
            if (mp[x]==0) {
                mp.erase(mp.find(x));
            }
            else {
                s.insert(make_pair(mp[x], x));
            }

           // check(s);

        }
        // for(auto p:s){
        //     cout<<p.first<<" "<<p.second<<endl;
        // }
        
        if(check(s)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

    }
}

int main() {
    int test;
    test=1;
    while (test--) {
        solve();
    }
}