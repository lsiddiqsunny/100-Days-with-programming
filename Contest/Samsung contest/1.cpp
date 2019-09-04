#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    multiset<int>rem;
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        if(t==1){
            int x;
            cin>>x;
            st.push(x);
            rem.insert(x);
        }
        else if(t==2){
                rem.erase(rem.find(st.top()));
                st.pop();

        }
        else{
            cout<<st.end()<<endl;
        }
    }


}
