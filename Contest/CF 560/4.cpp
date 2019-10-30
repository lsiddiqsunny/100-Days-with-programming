#include<bits/stdc++.h>

using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);
        long long gauss=a[0]*a[n-1];
        bool ok=true;

        for(int i=0; i<n; i++)
        {
            if(gauss%a[i]!=0)
            {
                ok=false;
            }
        }
        vector<long long >div;
        for(long long int i=2; i<=sqrt(gauss); i++)
        {
            if(gauss%i==0)
            {
                div.push_back(i);
                if(gauss!=i*i)
                {
                    div.push_back(gauss/i);
                }
            }
        }
        if(ok and div.size()==n)
        {
            cout<<gauss<<endl;
        }
        else
            cout<<-1<<endl;

    }


}
