#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int co=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                co++;
            }
        }
        if(co==n){
            cout<<"LOSE"<<endl;
        }
        else{
            cout<<"WIN"<<endl;
        }

    }

}


