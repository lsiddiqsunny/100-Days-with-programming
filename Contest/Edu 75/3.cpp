#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string odd="";
        string even="";
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]-'0')%2==0)
            {
                even+=s[i];
            }
            else
                odd+=s[i];
        }
        //  cout<<even<<endl<<odd<<endl;
        // reverse(even.begin(),even.end());
        // reverse(odd.begin(),odd.end());

        string res="";
        for(int i=0,j=0; i<even.size()|| j<odd.size(); i++,j++)
        {
            if(i>=even.size())
            {
                res+=odd[j];
                continue;
            }
            if(j>=odd.size())
            {
                res+=even[i];
                continue;
            }
            if(even[i]<odd[j])
            {
                res+=even[i];
                j--;

            }
            else if(even[i]>odd[j])
            {
                res+=odd[j];
                i--;
            }
        }
        cout<<res<<endl;

    }

}
