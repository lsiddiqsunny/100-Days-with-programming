#include<bits/stdc++.h>
using namespace std;
int main()
{

    freopen("leapfrog_ch_.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test;
    cin>>test;
    for(int cs=1; cs<=test; cs++)
    {
        string s;
        cin>>s;
        int b=0,c=0;
        bool ok=true;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]=='B')
            {
                b++;
                //continue;
            }
            // cout<<i<<endl;
            if(s[i]=='.')
            {
                c++;
            }

        }
        if(!b ||!c ||(c>b))
        {
            cout<<"Case #"<<cs<<": N"<<endl;
        }
        else
        {

            cout<<"Case #"<<cs<<": Y"<<endl;
        }


    }

}

