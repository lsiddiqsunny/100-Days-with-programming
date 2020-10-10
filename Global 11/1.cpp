#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        vector<int>ans;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==0){
                continue;
            }
            ans.push_back(a[i]);
            sum += a[i];
        }
        if(sum==0){
            cout<<"NO\n";
            continue;
        }
        sort(ans.rbegin(),ans.rend());
        cout<<"YES\n";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        for(int i=0;i<n-ans.size();i++){
            cout<<"0 ";
        }
        cout<<endl;
    }
}