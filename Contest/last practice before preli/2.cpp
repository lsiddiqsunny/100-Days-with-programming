#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="";
    for(int i=0; i<n; i++)
    {
        string x;
        cin>>x;
        if(i==0){
            s=x;
        }
        else{
            s=s+" "+x;
        }
    }
    int q;
    cin>>q;
    int caps=1;
    bool ok=true;
    string now="";
    while(q--){
        string x;
        cin>>x;
        if(x=="CapsLock"){
            caps*=-1;
        }
        else if(x=="Backspace"){
            if(now.size()!=0){
                now.pop_back();
            }
        }
        else if(x=="Space"){
            now.push_back(' ');
        }
        else{
            if(caps==-1){
                now.push_back(x[0]-32);
            }
            else{
                now.push_back(x[0]);
            }
        }
    }if(now==s){
    cout<<"Correct"<<endl;

    }
    else{
        cout<<"Incorrect"<<endl;
    }
  //  cout<<now<<endl;
}

