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
        string s;
        cin>>s;
        vector<int> v[10];
        for(int i=0; i<n; i++)
        {
            int now=s[i]-'0';
            v[now].push_back(i);
        }

        int ans[n];
        int now=1;
        int tot=0;int pos=-1;
        for(int i=0; i<=9; i++)
        {

          //  cout<<i<<": "<<endl;

            for(int j=0; j<v[i].size(); j++)
            {
                int rem=(n/2)-tot;
                if(v[i].size()>rem){
                    tot++;
                    ans[v[i][j]]=1;
                }

                if(v[i][j]<pos||tot>(n/2))
                {
                    ans[v[i][j]]=2;
                }
                else
                {
                  //  cout<<v[i][j]<<endl;
                    ans[v[i][j]]=1;
                    pos=v[i][j];
                    tot++;

                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
        /* sort(v.begin(),v.end());
         vector<pair<int,int> > F,S;
         for(int i=0; i<n/2; i++)
         {
             F.push_back(v[i]);
         }
         for(int i=n/2; i<n; i++)
         {
             S.push_back(v[i]);
             //
         }
         bool ok=true;
         int ans[n];
         if(F.size()==1)
         {
             ans[F[0].second]=1;
         }
         else if(F.size()!=0)
             for(int i=0; i<F.size()-1; i++)
             {
                // cout<<"here";
                 if( F[i].second>F[i+1].second)
                 {
                     ok=false;
                     break;
                 }
                 ans[F[i].second]=1;
                 ans[F[i+1].second]=1;
             }
         if(S.size()==1)
         {
             ans[S[0].second]=2;
         }
         else if(S.size()!=0)
             for(int i=0; i<S.size()-1; i++)
             {
                 //cout<<S[i].first;
                 if( S[i].second>S[i+1].second)
                 {
                     ok=false;
                     break;
                 }
                 ans[S[i].second]=2;
                 ans[S[i+1].second]=2;
             }*/



    }
}

