#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0; i<3; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int d;
    cin>>d;
    int ans=0;
    if(v[1]-v[0]<d)
    {
        ans+=d-abs(v[1]-v[0]);

    }
    if(v[2]-v[1]<d)
    {
        ans+=d-abs(v[2]-v[1]);

    }
    cout<<ans<<endl;


}
