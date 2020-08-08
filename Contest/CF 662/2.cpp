#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;
set<pair<int,int> > s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;;
    
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    map<int,int>::iterator mit;
    for(mit=mp.begin();mit!=mp.end();mit++){
        s.insert(make_pair(mit->second,mit->first));
    }
    int q;
    cin>>q;
    while(q--){
        int x,flag=0;
        string ch;
        cin>>ch>>x;
        if(ch[0]=='+'){
            s.erase(make_pair(mp[x],x));
            mp[x]++;
            s.insert(make_pair(mp[x],x));
        }
        else{
            s.erase(make_pair(mp[x],x));
            mp[x]--;
            s.insert(make_pair(mp[x],x));
        }
        int pos=0;
        vector<int> vec;
        set<pair<int,int> >::reverse_iterator rit;
        for(rit=s.rbegin();rit!=s.rend();rit++){
            pair<int,int>  p=*rit;
            vec.push_back(p.first);
            pos++;
            if(pos==3)
                break;
        }
        vec.push_back(0);vec.push_back(0);vec.push_back(0);
        if(vec[0]>=4){
            vec[0]-=4;
            sort(vec.begin(),vec.end());
            reverse(vec.begin(),vec.end());
            if(vec[0]>=4 || (vec[0]>=2&&vec[1]>=2))
                flag=1;
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
/*
10
1 1 1 2 2 2 2 3 3 4
*/
