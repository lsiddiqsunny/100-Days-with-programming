#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vector<long long int>pos;
    vector<long long int>neg;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0LL)
        {
            neg.push_back(a[i]);
        }
        else
            pos.push_back(a[i]);
    }
    long long ans=0;
    int nsize=neg.size(),msize=pos.size();
    if(nsize%2==0)
    {
        for(int i=0; i<nsize; i++)
        {
            ans+=abs(-1LL-neg[i]);
        }
        for(int i=0; i<msize; i++)
        {
            ans+=abs(1LL-pos[i]);
        }
    }
    else
    {
        for(int i=0; i<nsize-1; i++)
        {
            ans+=(-1LL-neg[i]);
        }

        for(int i=1; i<msize; i++)
        {
            ans+=abs(1LL-pos[i]);
        }

        if(msize==0){
         ans=ans+(1LL-neg[nsize-1]);
        }
        else

            ans=min(ans+(1LL-neg[nsize-1])+abs(1LL-pos[0]),ans+(-1LL-neg[nsize-1])+abs(-1LL-pos[0]));


    }
    cout<<ans<<endl;

}
