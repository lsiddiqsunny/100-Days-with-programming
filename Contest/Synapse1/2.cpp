#include<bits/stdc++.h>
using namespace std;


int coinReq[1000000+1] ;
void count( vector<int>S ) 
{ 


        coinReq[0] = 0; 
        for (int amt = 1; amt <= 1000000; amt++) {
            coinReq[amt] = INT_MAX;
            for (int j = 0; j < S.size(); j++) {
                if (S[j] <= amt) { 
                    coinReq[amt] = min(coinReq[amt - S[j]] + 1,coinReq[amt]) ;
                }
            }
        }
} 
int main(){
    vector<int>fib;
    fib.push_back(1);
    fib.push_back(2);
    while(fib.back()<=1000000){
        int sz=fib.size();
        int x=fib[sz-1];
        int y=fib[sz-2];
        if(x+y>1000000){
            break;
        }
        fib.push_back(x+y);
    //    cout<<fib.back()<<endl;;
    }
    //cout<<fib.size()<<endl;
    count(fib);
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        cout<<coinReq[n]<<endl;
    }

}