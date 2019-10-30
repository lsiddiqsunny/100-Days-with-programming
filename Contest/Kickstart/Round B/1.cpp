#include<bits/stdc++.h>
using namespace std;
int block[100005][26];
int main()
{
    int test;
    cin>>test;
    for(int cs=1; cs<=test; cs++)
    {
        int n,q;
        cin>>n>>q;
        memset(block,0,sizeof(block));
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            int pos=s[i]-'A';
            for(int j=0; j<26; j++)
            {
                if(j==pos)
                {
                    block[i+1][j]=block[i][j]+1;
                }
                else
                {
                    block[i+1][j]=block[i][j];
                }
                //  cout<<block[i+1][j]<<" ";
            }
            // cout<<endl;
        }
        int yes=0;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int even=0,odd=0;
            for(int i=0; i<26; i++)
            {
                int co=block[r][i]-block[l-1][i];
                if(co%2==1)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
            }
            int sz=r-l+1;
            if(sz%2==0)
            {
                if(odd==0)
                {
                    yes++;
                }
            }
            else
            {
                if(odd==1)
                {
                    yes++;
                }

            }
        }
        cout<<"Case #"<<cs<<": "<<yes<<endl;
    }

}
