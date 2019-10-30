#include<bits/stdc++.h>
using namespace std;
struct food
{
    long long s,e,l;

};

bool cmp(food &f1,food &f2)
{
    return f1.s*f2.l<f2.s*f1.l;

}
int main()
{
    int test;
    cin>>test;
    for(int cs=1; cs<=test; cs++)
    {
        int n;
        cin>>n;
        vector<food>v;
        int total=0;
        for(int i=0; i<n; i++)
        {
            long long a,b,c;
            cin>>a>>b>>c;
            food f;
            f.s=a;
            f.e=b;
            f.l=c;
            v.push_back(f);
            total+=a;
        }
        sort(v.begin(),v.end(),cmp);
        long long int cost[n+1][total+1];
        memset(cost,0,sizeof(cost));
        for(int i=n-1; i>=0; i--)
        {
            for(int j=total; j>=0; j--)
            {
                if(v[i].s+j<=total)
                {
                    cost[i][j]=max(cost[i+1][j],cost[i+1][j+v[i].s]+max(0LL,v[i].e-j*v[i].l));
                }
                else
                {
                    cost[i][j]=cost[i+1][j];
                }

            }
        }
         cout<<"Case #"<<cs<<": "<<cost[0][0]<<endl;


    }

}
