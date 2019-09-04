#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long long k;
    cin>>n>>k;
    priority_queue<long long, std::vector<long long>, std::greater<long long> > a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    int co=0;
    bool ans=true;
    while(1)
    {
        if(a.empty())
        {
            ans=false;
            break;
        }
        long long int first=a.top();
        a.pop();
        if(first>=k)
        {
            break;
        }
        if(a.empty())
        {
            if(first<k)
            {
                ans=false;
            }
            break;
        }

        long long int second=a.top();
        a.pop();

        long long int val=first+2*second;
        co++;
        a.push(val);

    }
    if(ans)
        cout<<co;
    else
        cout<<"-1";
    cout<<endl;
}
