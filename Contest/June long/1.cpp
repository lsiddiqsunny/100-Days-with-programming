#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int p=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='P')
                p++;
        }
        if(((p*100.0)/n)>=75.0)
        {
            cout<<0<<endl;
            continue;
        }
        int co=0;

        for(int i=2; i<n-2; i++)
        {
            if(s[i]=='A' and (s[i-1]=='P'||s[i-2]=='P') and (s[i+1]=='P'||s[i+2]=='P'))
            {
                p++;
                co++;
                ///s[i]='P';

                if(((p*100.0)/n)>=75.0)
                {
                    break;
                }
            }
        }
        if(((p*100.0)/n)>=75.0)
        {
            cout<<co<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        continue;

    }


}
