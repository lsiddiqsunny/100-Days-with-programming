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
        string s[n];
        int one=0;
        int zero=0;
        int odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            odd+=(s[i].size()%2);
            for(int j=0; j<s[i].size(); j++)
            {
                if(s[i][j]=='1')
                {
                    one++;
                }
                else
                    zero++;
            }
        }
        if(odd == 0 && one%2 == 1 )
            cout << n-1 << endl;
        else
            cout << n << endl;



    }


}
