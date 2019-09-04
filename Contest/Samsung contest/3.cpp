#include<bits/stdc++.h>
using namespace std;
bool ok(string s)
{
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
        }
        if(s[i]=='{')
        {
            st.push('{');
        }
        if(s[i]=='[')
        {
            st.push('[');
        }
        if(s[i]==')')
        {
            if(st.empty() ||st.top()!='(')
            {

                return false;
            }
            else
                st.pop();
        }

        if(s[i]=='}')
        {
            if(st.empty() ||st.top()!='{')
            {
                return false;
            }
            else
                st.pop();
        }
        if(s[i]==']')
        {
            if(st.empty() || st.top()!='[' )
            {
               /// cout<<st.top()<<" "<<s[i]<<endl;
                return false;
            }
            else
                st.pop();
        }
    }
    if(st.empty())
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(ok(s))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

}
