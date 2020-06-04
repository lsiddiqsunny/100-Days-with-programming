#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=1024;i++){
        vector<int>temp=v;
        for(int j=0;j<n;j++){
            temp[j]^=i;
        }
        sort(temp.begin(),temp.end());
        if(v==temp){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}