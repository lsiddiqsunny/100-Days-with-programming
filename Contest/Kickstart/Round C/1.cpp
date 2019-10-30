
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    for(int cs=1; cs<=test; cs++)
    {
        int n,r,c,rnow,cnow;
        cin>>n>>r>>c>>rnow>>cnow;
        set<pair<int,int> > row[r+1];
        set<pair<int,int> > col[c+1];
        row[rnow].insert(make_pair(cnow,cnow));
        col[cnow].insert(make_pair(rnow,rnow));

        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='E')
            {
                set<pair<int,int> >::iterator it=col[cnow].begin();
                int rn=(it)->second;
                it=row[rn].begin();
                int x=(it)->first;
                int y=(it)->second+1;
                row[rn].clear();
                row[rn].insert(make_pair(x,y));
                cnow=y;
                col[cnow].clear();
                col[cnow].insert(make_pair(cnow+1,rn));

            }
            if(s[i]=='W')
            {

            }
            if(s[i]=='N')
            {

            }
            if(s[i]=='S')
            {


            }
            cout<<rnow<<" "<<cnow<<endl;
        }

    }

}
