#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<26; i++)
    {
        mp[i]=0;
    }
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]-'a']++;
    }
    for(int i=0; i<25; i++)
    {
        mp[i+1]+=mp[i]/2;
        if(mp[i]%2==1)
        {
            mp[i]=1;
        }
        else
        {
            mp[i]=0;
        }

    }
    for(int i=25;i>=0;i--){
        for(int j=0;j<mp[i];j++){
            cout<<(char)('a'+i);
        }
    }
    cout<<endl;
}
