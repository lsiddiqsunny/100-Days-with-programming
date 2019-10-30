#include<bits/stdc++.h>
using namespace std;
int bits[64];
vector<int>g[64];
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        long long mark=1;
        for(int j=0;j<64;j++){
            if(a[i]&mark<<j){
                bits[j]++;
            }
            if(bits[j]>=3){
                cout<<3<<endl;
                return 0;
            }
        }
    }


}
