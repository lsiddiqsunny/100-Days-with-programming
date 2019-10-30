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
        vector<int>v[26];
        for(int i=0;i<s.size();i++){
            int c=s[i];
            int co=0;
            int j;
            for( j=i; j<s.size() and s[j]==c;j++){
                co++;
            }

            v[c-'a'].push_back(co);

            if(j!=i){
                j--;
                i=j;
            }
        }
        for(int i=0;i<26;i++){
            int ok=true;
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]%2==1){
                    ok=false;
                }
            }
            if(v[i].size()!=0 and !ok){
                cout<<(char)(i+'a');
            }

        }
        cout<<endl;

    }


}
