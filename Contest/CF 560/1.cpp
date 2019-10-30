#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    string num;
    cin>>num;
    int co=0;
    if(num[n-y-1]!='1')
    {
        co++;
    }
    for(int i=n-1; i>=n-x; i--)
    {
        if(i==n-y-1)
        {
            continue;
        }
        if(num[i]=='1')
        {
            co++;
        }
    }

    cout<<co<<endl;

}
