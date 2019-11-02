#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>div;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            div.push_back(i);
            if(i*i!=n){
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(),div.end());
    if(div.size()==2){
        cout<<2+2*n<<endl;
    }
    else{
        int sz=div.size();
        sz/=2;
        cout<<2*(div[sz]+n/div[sz])<<endl;
    }

}